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
      ListNode* temp=head;
      int count=0;
      while(temp!=NULL)
      {
          count++;
          temp=temp->next;

      }
      return count;
  }

  ListNode* reverseingroups(ListNode* &head,int k)
    {
         if(head==NULL)
        {
            return head;


        }
        if(head->next==NULL)
        {
            return head;
        }
       
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* nextnode=curr->next;
        int pos=0;

       
        int len=getlength(head);

       if(len<k)

       {
           return head;
       }

        while(pos<k)
        {
           
             nextnode=curr->next;
            
            curr->next=prev;

            prev=curr;

            curr=nextnode;
             pos++;
        }
          ListNode*reckans=NULL;

        if(nextnode!=NULL)
        {
            reckans=reverseingroups(nextnode,k);

           head->next=reckans;

        }
       

        


          return prev;
    }

 

   
    ListNode* reverseKGroup(ListNode* head, int k) {

    ListNode* ans=reverseingroups(head,k);
    return ans;
   

        
    }
};