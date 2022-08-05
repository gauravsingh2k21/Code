class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
      int in = 0;  
      int m1=INT_MIN,m2=INT_MIN;
      for(int i=0;i<nums.size();++i)
      {
          if(m1<nums[i])
          {   
              in = i;
              m1=nums[i];
          }   
      }
        for(int i=0;i<nums.size();++i)
        {
            if(m2<nums[i] && m2<=m1 && i!=in)
                m2 = nums[i];
        }
        
        return (m2-1)*(m1-1);
    }
};