class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) 
    {
       int running_sum = 0, sum =0,count =0;
       unordered_map<int,int> m;
       m[0] = -1;
       for(int i=0;i<nums.size();++i)
       {
          running_sum+=nums[i];
          sum = running_sum%k;
          if(m.find(sum)==m.end())
              m[sum]=i;
          else if(i-m[sum]>1)
              return true;
       }
        return false;
    }
};