class Solution {
public:
    void reverseString(vector<char>& s)
    {
      helper(s,0,s.size()-1);  
    }
    
    void helper(vector<char>& s,int p1, int p2)
    {
        if(p1>p2)
            return ;
        swap(s[p1],s[p2]);
        helper(s,p1+1,p2-1);
    }
};