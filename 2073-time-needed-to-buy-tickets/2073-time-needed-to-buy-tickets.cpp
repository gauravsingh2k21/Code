class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k)
    {
       /* int count= 0 ; 
        int n = tickets.size();
        
        queue<int> q;
        for(int i=0;i<n;++i)
            q.push(i);
        
        while(tickets[k]>0)
        {
            ++count;
            int idx = q.front();
            q.pop();
            --tickets[idx];
            if(tickets[idx]>0) q.push(idx);
        }
        return count;*/
        
        
        
        int count =k;
        queue<int> q;
        int n = tickets.size();
        
        for(int i=k ; i<n;++i)
            q.push(tickets[i]);
        
        for(int i=0;i<k;++i)
        {  
            if((tickets[i]-1)>0)
             q.push(tickets[i]-1);
        }  
        
        while(q.front()>1)
        {
            int  cycle = q.size();
            while(cycle--)
            {
                count++;
                int t = q.front()-1;
                q.pop();
                if(t>0)
                    q.push(t);
            }
            
        }
        count++;
        return count;
            
        
    }
};