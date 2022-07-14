class Solution {
public:
       vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        vector<vector<int>> ans;
        vector<int> subset;
        int sum=0;
        sort(candidates.begin(),candidates.end());
        helper(ans,subset,0,candidates,target,sum);
        return ans;
        
    }
    
    void helper( vector<vector<int>> &ans, vector<int>& subset, int i,vector<int>& candidates, int target,int sum )
    {
        if(sum>target)
            return;
        if(sum==target)
        {
            ans.push_back(subset);
            return;
        }
        if(i>=candidates.size()) return;
        
            
        subset.push_back(candidates[i]);
        sum+=candidates[i];
        helper(ans,subset,i+1,candidates,target,sum);
       
        sum-=candidates[i]; //backtracking
        subset.pop_back();        
        
        while(i+1<candidates.size()&&candidates[i]==candidates[i+1])
            i++;
        helper(ans,subset,i+1,candidates,target,sum); 
        
     
    }
};