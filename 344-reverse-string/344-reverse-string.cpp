class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int j= s.size()-1;
        helper(s,0,j);
    }
    
    void helper(vector<char>& s, int i,int j )
    {
        if(i>=j)
            return;
        helper(s,i+1,j-1);
        swap(s[i],s[j]);
    }
};