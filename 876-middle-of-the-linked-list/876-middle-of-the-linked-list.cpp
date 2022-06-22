/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head)
    {
      ListNode *p1 = head;
      ListNode *p2 = head;
      int count =1 ;  
      
      while(p2->next!=nullptr)
      {
          p2=p2->next;
          count++;
      }
        
       int val = count/2 ;
        
      while(val>0)
      {
          p1=p1->next;
          --val;
      }
        return p1;
      
        
        
        
    }
};