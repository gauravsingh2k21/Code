class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int sum =0 , carry =0 ;
        int n = digits.size();
       vector<int>nums;
        
        for(int i=n-1;i>=0;--i)
        {
            int sum =0;
            if(i==n-1)
            {
                sum+=digits[i]+1;
                carry = sum /10;
                nums.push_back(sum%10);
            }
            else
            {    
                sum+=digits[i]+carry;
                carry = sum /10;
                nums.push_back(sum%10);
            }       
        }
        if(carry)
            nums.push_back(carry);
        reverse(nums.begin(),nums.end());
        return nums;
    }
};