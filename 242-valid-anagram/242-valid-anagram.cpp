class Solution {
public:
    bool isAnagram(string s, string t) 
    {
      vector<int>s1(26,0);

        
      if(s.size()!=t.size())
          return false;
        
      for(int i=0;i<s.size();++i)
          s1[s[i]-'a']++;
       
      for(int i=0;i<t.size();++i)  
          s1[t[i]-'a']--;
      
       for(int i=0;i<26;++i)
       {
           if(s1[i]>0)
              return false;
       }
        return true;
        
        
    }
};