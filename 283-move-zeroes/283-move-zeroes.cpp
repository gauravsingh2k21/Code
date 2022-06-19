class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
      /*int n = nums.size();
        int p1=0,p2=1;
        while(p2<n && n>1)
        {
            if(nums[p1]==0 && nums[p2]!=0)
            {
                swap(nums[p1],nums[p2]);
                p1++;
                p2++;
            }
            
            else if(nums[p1]==0 && nums[p2]==0)
                p2++;
            
            else 
            {
                p1++;
                p2++;
            }
        } */
        
        
        // Using slow and fast pointers
        
        int slow =0, fast =0;
        while(fast<nums.size())
        {
            if(nums[fast]!=0)
            {
                nums[slow] = nums[fast];
                slow++;
            }
            fast++;
        }
        while(slow<nums.size())
        {
            nums[slow] = 0;
            slow++;
        }
    }
};