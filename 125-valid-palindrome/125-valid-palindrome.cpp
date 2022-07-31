class Solution {
public:
    bool isPalindrome(string s) 
    {
        
        string st ="";
        for(auto it:s)
        {
            if(!(isalnum(it)))
                continue;
            else
                st+=tolower(it);    
        }
      for(int i=0,j=st.size()-1;i<=j;i++,j--)
      { 
          if((st[i])!=st[j])
              return false;
             
      }
        
       return true; 
    }
};