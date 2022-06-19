class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int slow=0, fast=0;
        int val = nums[slow];
        
        
        while(fast<nums.size())
        {
            if(nums[fast]==val)
                fast++;
            else
            {
              slow++;
              nums[slow] = nums[fast++];
              val = nums[slow];  
            }
        }
        return slow+1;
        
    }
};