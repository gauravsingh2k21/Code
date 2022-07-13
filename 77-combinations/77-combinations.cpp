class Solution {
public:
    vector<vector<int>> combine(int n, int k)
    {
      vector<int> subset; 
      vector<vector<int>> ans;
      helper(ans,subset,n,k,1) ; 
      return ans;
    }
    
    void helper(vector<vector<int>> &ans, vector<int> &subset, int n, int k,int i)
    {
        if(i>n)
        {
            if(k==0)
              ans.push_back(subset);
            return;
        }
        subset.push_back(i);
        helper(ans,subset,n,k-1,i+1);
        
        subset.pop_back();
        helper(ans,subset,n,k,i+1);
    }
};