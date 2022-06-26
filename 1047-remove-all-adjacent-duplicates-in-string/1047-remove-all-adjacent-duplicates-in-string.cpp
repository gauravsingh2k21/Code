class Solution {
public:
    string removeDuplicates(string s)
    {
       string res;
        
       int i=0;
        while(i<s.size())
        {
            if(!res.empty() && res.back()==s[i])
                res.pop_back();
            
            else
                res.push_back(s[i]);
         
            i++;
        }
        
        return res;
    }
};