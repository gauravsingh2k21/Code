class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
      int n = nums.size();  
      double max_val =INT_MIN;  
        
            int p1=1;
            int sum =0;
            //int p2 = p1+k-1;
            
            for(int i=0;i<k;++i)
               sum+=nums[i];
                
            max_val = max(max_val,(double)sum/k);
            
             while(p1+k<=nums.size())
            {
                sum-=nums[p1-1];
                sum+=nums[p1+k-1];
                max_val = max(max_val,(double)sum/k);
                p1++;
             }     
                
        return max_val;
    }
};