class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold)
   /* {
      int p1 =0;
      int count =0; 
      while(p1+k<=arr.size())
      {
          double sum = 0 ;
          
          for(int i=0;i<k;++i)
             sum+=arr[p1+i];
          
          double avg=(double)sum/k;
          
          if(avg>=threshold)
              count++;
          p1++;
          
      }
        return count;
    }*/
    
    {
        int p1=1;
        int count =0;
        
        double avg_val=0;
        
        int sum= 0;
        for(int i =0;i<k;++i)
            sum+=arr[i];
        
        avg_val = (double)sum/k;
        if(avg_val>=threshold)
              count++;
        
        
        
        while(p1+k<=arr.size())
        {
            sum-=arr[p1-1];
            sum+=arr[p1+k-1];
            avg_val =  (double)sum/k;
            
            if(avg_val>=threshold)
              count++;
            p1++;
            
            
        }
        return count;
    }
};