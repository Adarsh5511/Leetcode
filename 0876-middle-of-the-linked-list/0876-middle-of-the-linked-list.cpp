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
    
    int getlength(ListNode* head)
    {
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
            

        }
        return count;

    }
    
    
    ListNode* middleNode(ListNode* head) {
        
        int len=getlength(head);
        int pos=len/2+1;
        ListNode* temp=head;
        while(pos!=1)
        {
            pos--;
            temp=temp->next;
            
            
        }
        
        return temp;
        
        
    }
};