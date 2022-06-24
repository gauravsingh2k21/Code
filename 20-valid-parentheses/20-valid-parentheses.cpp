class Solution {
public:
    bool isValid(string s) 
    {
       stack<char> st;
        for(char &i:s)
        {
          switch(i)
          {
              case '{':
              case '(':
              case '[': st.push(i); break;
              case '}': if(st.empty() || st.top()!='{' ) return false;  else st.pop() ; break;
              case ')': if(st.empty() || st.top()!='('  ) return false;  else st.pop() ; break;
              case ']': if(st.empty() || st.top()!='[') return false;  else st.pop() ; break;
              default:  ;  
          }         
             
        }
        
        return st.empty();
        
        
        /* stack<char> paren;
        for (char& c : s)
        {
            switch (c)
            {
                case '(': 
                case '{': 
                case '[': paren.push(c); break;
                case ')': if (paren.empty() || paren.top()!='(') return false; else paren.pop(); break;
                case '}': if (paren.empty() || paren.top()!='{') return false; else paren.pop(); break;
                case ']': if (paren.empty() || paren.top()!='[') return false; else paren.pop(); break;
                default: ; // pass
            }
        }
        return paren.empty() ;*/
    
    }
};