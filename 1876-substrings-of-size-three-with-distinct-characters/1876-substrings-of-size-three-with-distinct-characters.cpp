class Solution {
public:
    int countGoodSubstrings(string s) 
    {
      int count =0;
        if(s.size()<3)
            return false ;
      for(int i=0;i<=s.size()-3;++i)
      {
          set<int> st;
          for(int j = i;j<i+3;j++)
          {
              if(st.find(s[j])!=st.end())
                 break;
                  
              st.insert(s[j]);
              
            if(j==i+2)
             count++;
          }
          
      }
        return count;
    }
};