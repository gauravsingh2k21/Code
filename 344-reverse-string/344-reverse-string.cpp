class Solution {
public:
    void reverseString(vector<char>& s) 
    {
      TailRecursion(s,0,s.size()-1);
          
    }
private:
     void TailRecursion(vector<char>& s,int i, int j )
     {
         if(j-i+1<=1)
             return;
         swap(s[i],s[j]);
         
         TailRecursion(s,i+1,j-1);
     }
};