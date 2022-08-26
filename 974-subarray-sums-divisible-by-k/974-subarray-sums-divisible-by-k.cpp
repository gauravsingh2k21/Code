class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) 
    {
        int running_sum =0,sum =0,count=0;
        unordered_map<int,int>m ;
        m[0] = 1;
        for(int i =0;i<nums.size();++i)
        {
           running_sum+=nums[i];
           sum = running_sum%k;
           if(sum<0)
               sum+=k;
           if(m.find(sum)!=m.end())
               count+=m[sum];
           m[sum]++; 
        }
        return count;
            
    }
};