/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) 
    {
        
     // O(n) - time O(n) -space
    /* unordered_set<ListNode*> s;
     while(head!=nullptr)
     {
         if(s.find(head)!= s.end())
             return head;
         s.insert(head);
         head=head->next;
     }
        return NULL;*/
        
        ListNode *slow = head;
        ListNode *fast = head;
        
        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast)
                break;
        }
        
       if(!fast||!fast->next)
           return NULL;
        
       ListNode *p1 = head;
       ListNode *p2 = fast;
        
            
       while(p1!=p2)
        {
            p1 = p1->next;
            p2 = p2->next;
        }
        
        return p1;
              
     }
      
    
};