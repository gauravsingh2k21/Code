class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
      unordered_map<int,int> m;
      for(int i=0;i<arr.size();++i)
          m[arr[i]]++;
      
      set<int> s;
        
      for(auto i:m)
      {
         if(s.find(i.second)!=s.end())
              return false;
        
         s.insert(i.second);       
           
      }
        
        
        return true;
      
    }
};