class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
       /* int slow=0, fast=0;
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
        return slow+1; */
        
        
        
        set<int> s;
        for(int i=0;i<nums.size();++i)
            s.insert(nums[i]);
        
        int i=0;
        for(auto it : s)
        {  
            nums[i] = it;
            i++;
        }
        
        return s.size();
            
        
    }
    
    
};