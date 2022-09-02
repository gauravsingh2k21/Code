class Solution 
{
public:
    int subarraySum(vector<int>& nums, int k) 
    {
      unordered_map<int,int> m;
      int count = 0;
      int running_sum = 0 ;
      for(int i=0;i<nums.size();++i)
      {
         running_sum+=nums[i];
         if(running_sum == k)
            count++;
         if(m.find(running_sum-k)!=m.end()) 
             count+=m[running_sum-k];
          
         m[running_sum]++; 
      }
        return count;
    }
};