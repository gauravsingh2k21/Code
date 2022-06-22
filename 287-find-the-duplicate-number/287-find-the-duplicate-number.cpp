class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        unordered_set<int>s;
        int i=0;
        while(i < nums.size())
        {
            if(s.find(nums[i])!=s.end())
               break;
            
            s.insert(nums[i]); 
               i++;
        }
        return nums[i];
    }
};