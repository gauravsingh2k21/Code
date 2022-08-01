class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) 
    {
        vector<int> missing;
        int val=1;
        int ans = k-1;
        for(int i=0;k>0;)
        {
            if(i==arr.size())
            {
                while(k>0)
                {
                    missing.push_back(val);
                    k--;
                    val++;
                }
            }
            else if(arr[i]!=val)
            {
                missing.push_back(val);
                k--;
            }
            
            else if(arr[i]==val)
                i++;
          
            val++;
        }
        
        return missing[ans];
    }
};