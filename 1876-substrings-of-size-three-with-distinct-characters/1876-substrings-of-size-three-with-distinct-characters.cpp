class Solution {
public:
    int countGoodSubstrings(string s)
    {
      int count =0;
      if(s.size()<3)
          return 0;
      for(int i=0;i<s.size()-2;++i)
      {
          set<char> st;
          
          for(int j=i;j<i+3;++j)
          {
              
              if(st.find(s[j])!=st.end())
              {
                  
                 break;
              }    
              st.insert(s[j]);   
              if(j==i+2)
                  count++;
          }
      }
        
        return count;
    }
};