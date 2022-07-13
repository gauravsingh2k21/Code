class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        helper(nums,0,ans);
        return ans;
    }
    
    void helper(vector<int>& nums,int left,vector<vector<int>> &ans)
    {
        if(left==nums.size())
        {
            ans.push_back(nums);
           return;
        }
        set<int> m;
        for(int i = left;i<nums.size();++i)
        {
            if(m.find(nums[i])!=m.end())
               continue;
            m.insert(nums[i]);
            swap(nums[left],nums[i]);
            helper(nums,left+1,ans);
            swap(nums[left],nums[i]);
        }
    }
};