class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) 
    {
        vector<int>arr{1,2,3,4,5,6,7,8,9};
        vector<vector<int>>ans;
        vector<int> subset;
        int sum=0;
        helper(ans,subset,0,arr,k,sum,n);
        return ans;
        
        
    }
    
    void helper(vector<vector<int>>&ans, vector<int> &subset, int i, vector<int>&arr,int k,int sum,int n )
    {
        if(k==0 )
        {
            if(sum==n)
            {     
             ans.push_back(subset);
             return ;
            }    
        }
        if(i>=arr.size())
            return;
        
        if(sum>n)
            return;
        if(k<0)
            return;
        
        sum+=arr[i];
        subset.push_back(arr[i]);
        
        helper(ans,subset,i+1,arr,k-1,sum,n);
        

        subset.pop_back();
        sum-=arr[i];
        
        helper(ans,subset,i+1,arr,k,sum,n);
        
        
        
    }
};