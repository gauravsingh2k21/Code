class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        vector<int>temp;
        sort(nums.begin(),nums.end());
        helper(ans,nums,0,temp);
        return ans;
        
    }
    
    void helper(vector<vector<int>> &ans, vector<int>& nums, int i, vector<int>&temp)
    {
        if(i==nums.size())
        {    
            ans.push_back(temp);
            return;
        } 
        
        else
        {    
        temp.push_back(nums[i]);
        helper(ans,nums,i+1,temp);
        
        temp.pop_back();
        
        while(i+1<nums.size()&& nums[i]==nums[i+1])
           i++;
        helper(ans,nums,i+1,temp);
        }    
        
    }
};