class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {
        vector<int> arr(gain.size()+1);
        arr[0] = 0;
        int val = arr[0];
        for(int i=0;i<gain.size();++i)
        {
            arr[i+1] = arr[i]+gain[i];
            val = max(val,arr[i+1]);
        }
        
        return val;
    }
};