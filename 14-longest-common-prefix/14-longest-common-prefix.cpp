class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        
        string temp = "";
        temp= strs[0];
        for(int i=1;i<strs.size();++i)
        {
            string str = "" ;
            for(int j=0;j<strs[i].size() && temp.size();++j)
            {    
              if(strs[i][j]!=temp[j])
                  break;
              str+=strs[i][j];  
            }
            temp = str;
        }
        
        return temp;
    }
};