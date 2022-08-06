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
    int getDecimalValue(ListNode* head) 
    {
        ListNode * temp = head;
        int count =0 ;
        
        while(temp)
        {
            temp = temp->next;
            count++;
        }
        
        int num =0;
        ListNode *temp2 = head;
        
        while(count>0)
        {
            num+=(temp2->val)*pow(2,count-1);
            temp2 = temp2->next;
            count--;
        }    
        
        return num;
            
    }
};