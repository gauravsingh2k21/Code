class Solution {
public:
    bool isPalindrome(int x) 
    {
      if(x<0)
          return false;
      vector<int>  nums;
        
      while(x>0)
      {
          int i = x%10;
          x = x/10;
          nums.push_back(i);
      }
      reverse(nums.begin(),nums.end());
        
      for(int i=0,j=nums.size()-1;i<=j;i++,j--)
      {
          if(nums[i]!=nums[j])
              return false;
      }
        return true;
    }
};