class Solution {
public:
    string removeDuplicates(string s) 
    {
      string res;
      stack<char> stk;  
      int i =0;
        
      while(i<s.size())
      {
          if(stk.empty() ==false && stk.top()==s[i] )
              stk.pop();
          else 
              stk.push(s[i]);
          
          i++;
      }
        
      while(stk.empty()==false)
      {
        res.push_back(stk.top());
        stk.pop();
      }   
     
      reverse(res.begin(),res.end());
          
      return  res;   
    }
};