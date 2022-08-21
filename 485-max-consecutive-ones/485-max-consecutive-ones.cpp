class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int max_one=INT_MIN;
        int count =0;
        for(int i=0;i<nums.size();++i)
        {
                if(nums[i]==1)
                    count++;
                if(nums[i]==0 || i==nums.size()-1)
                {
                    max_one = max(count,max_one);
                    count=0;   
                }
        }
        return max_one;
    }
};