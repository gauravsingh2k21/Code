class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
      int n = nums.size();
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
        }    
    }
};