class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
       int max_count =0;
       if(s=="")
           return max_count;
       if(s==" ")
           return 1;
       for(int start =0;start<s.size();++start)
       {
           set<char>st;
           int end = start;
           int count = 0;
           for(;end<s.size();++end)
           {
               if(st.find(s[end])!=st.end())
                   break;
               st.insert(s[end]);
               count++;
           }
           max_count = max(count,max_count);
       }
        
        return max_count;
    }
};