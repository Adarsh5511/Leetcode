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
    
    ListNode* middle(ListNode*head)
    {
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast->next!=NULL)
        {
            fast=fast->next;
            if(fast->next!=NULL)
            {
                fast=fast->next;
                slow=slow->next;
            }

        }
        return slow;
    }

   ListNode* reverseall(ListNode*&head)
{
    ListNode*prev=NULL;
    ListNode*curr=head;

    while(curr!=NULL)
    {
         ListNode* nextnode=curr->next;

         curr->next=prev;
         prev=curr;
         curr=nextnode;
    }
    head=prev;
    return prev;
}

bool compare(ListNode*head,ListNode*head1)
{
    ListNode*temp=head;
    ListNode*temp1=head1;

    while(temp!=NULL && temp1!=NULL)
    {
        if(temp->val!=temp1->val)
        {
            return false;
        }
        else
        {
            temp=temp->next;
            temp1=temp1->next;
        }
    }
    return true;
}

    bool isPalindrome(ListNode* head) {

        ListNode*mid=middle(head);
        ListNode* newhead=mid->next;
        mid->next=NULL;
        
        ListNode* rev=reverseall(newhead);

        bool value=compare(head,newhead);
        return value;






        
    }
};