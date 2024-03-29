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
    bool hasCycle(ListNode *head) 
    {
       /* unordered_set<ListNode*> s;
     while(head!=nullptr)
     {
         if(s.find(head)!= s.end())
             return true;
         s.insert(head);
         head=head->next;
     }
        return false;
        
 
############# If hare will be less than or equal than trtoise then there will be a loop ###############
 
        
        ListNode *tortoise = head;
        if(!tortoise)
            return false;
        ListNode *hare = head->next;
        
        
        
        if(tortoise->next == nullptr)
            return false;
        
        while(tortoise!=nullptr)
        {
            tortoise = tortoise->next;
            if(hare->next == nullptr|| hare->next->next ==nullptr)
                break;
                
            hare = hare->next->next;
            
            if(hare<=tortoise)
                return true;
        }
        return false; */
        
        
// Using the same slow fast pointer in other way         
        
        if(head==nullptr)
            return false;
        
        ListNode *slow = head;
        ListNode *fast = head;
        
        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast)
                return true;
        }
        return false;
        
    }
};