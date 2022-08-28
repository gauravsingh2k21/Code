class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums)
    {
         int n = nums.size();
         vector<int>left(n);
         vector<int>right(n);
         vector<int> ans;
         
         left[0] = 0;
         right[n-1] = 0;
         for(int i=1,j=n-2;i<nums.size() && j>=0;i++,--j)
         {
             left[i] = left[i-1]+nums[i-1];
             right[j] = right[j+1]+nums[j+1];
         }
        for(int i=0;i<nums.size();++i)
        {
            int sum = i*nums[i] - left[i] +right[i] - (n-i-1)*nums[i]; 
            ans.push_back(sum);
        }
        
        return ans ;
        
    }
};