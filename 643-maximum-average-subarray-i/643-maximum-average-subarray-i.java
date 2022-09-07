class Solution {
    public double findMaxAverage(int[] nums, int k) 
    {
      double max=Integer.MIN_VALUE;
        double sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }
        max=sum/k; 
        int last=k;
        for(int start=0;last<nums.length;start++)
        {
            double average=0;
            sum=sum-nums[start];
            sum=sum+nums[last];
            last++;
            average=sum/k;
            if(max<average)
                max=average;
        }
        return max;
    }
}