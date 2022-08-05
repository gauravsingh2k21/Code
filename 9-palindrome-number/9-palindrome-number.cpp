class Solution {
public:
    bool isPalindrome(int x) 
    {
        int m=1;
        long long int num=0;
        int tem =x;
      if(x<0)
          return false;
        
      while(x>0)
      {
          int i = x%10;
          num=num*10+i;
          x = x/10;
      }
     
        return (num==tem);
    }
};