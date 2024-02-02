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
    
    ListNode* recurr( ListNode* &prev,ListNode* &curr)
    {
        if(curr==NULL)
        {
            return prev;
        }
        
         ListNode *nextnode=curr->next;
            
           
            curr->next=prev;
            
//             prev=curr;
            
//             curr=nextnode;
         
       ListNode* ans=    recurr(curr,nextnode);
          
         
        
       return ans;
        
        
    
    }
    
    
    ListNode* reverseList(ListNode* head) {
        
        ListNode* prev=NULL;
        ListNode* curr=head;
      
        ListNode* ret=recurr(prev,curr);
        
        return ret;
    }
    
};