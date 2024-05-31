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

    ListNode* reverse(ListNode* l1)
    {
        ListNode* curr=l1;
        ListNode* prev=NULL;
         ListNode* nextnode=NULL;
        // ListNode* curr=l1;
        
        while(curr!=NULL)
        {
            nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
            
        }
        
        return prev;
  
        
    }
    
    void insertathead(ListNode* &head,ListNode* &tail,int digit)
    {
          ListNode* newnode = new ListNode(digit);
        if(head==NULL)
        {
              
              tail=newnode;
              head=newnode;
            return;
        }
        else
        {
           
             newnode->next=head;
             head=newnode;
            
        }
    }
    
    ListNode* add(ListNode* l1,ListNode* l2)
{
        int carry=0;

        
        ListNode* head=NULL;
        ListNode* tail=NULL;
        
        
        
        
while((l1!=NULL && l2!=NULL) ||(l1!=NULL && l2==NULL)||(l2!=NULL && l1==NULL)) 
         {
    
    if(l1!=NULL && l2!=NULL){
    
           int  number=l1->val+l2->val+carry;
    
           int digit=number%10;
        insertathead(head,tail,digit);
        carry=number/10;
        l1=l1->next;
        l2=l2->next;
    }
          
if(l2!=NULL && l1==NULL)
          {
             int   number=l2->val+carry;
    
           int digit=number%10;
    
            
       
           insertathead(head,tail,digit);
           carry=number/10;

          l2=l2->next;
          }
        
if(l1!=NULL && l2==NULL)
              {
        
        int number=carry+l1->val;
    
         int digit=number%10;
    
            
       
            insertathead(head,tail,digit);
    
                carry=number/10;
                l1=l1->next;
              }
        
        
    }
        while(carry!=0)
        {
            int number=carry;
            int digit=number%10;
              insertathead(head,tail,digit);
                carry=number/10;
            
        }
      
        return head;
        

      
      }
    
//     ListNode* add(ListNode* l1, ListNode* l2) {
//         int carry = 0;
//         ListNode* head = NULL;
//         ListNode* tail = NULL;

//         while (l1 != NULL || l2 != NULL || carry != 0) {
//             int sum = carry;
//             if (l1 != NULL) {
//                 sum += l1->val;
//                 l1 = l1->next;
//             }
//             if (l2 != NULL) {
//                 sum += l2->val;
//                 l2 = l2->next;
//             }

//             int digit = sum % 10;
//             carry = sum / 10;
//             insertathead(head, tail, digit);
//         }

//         return head;
//     }
  
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

 
        
        
        
        

         
       
        
        //step2 - add 2 LL
        ListNode* ans = add(l1, l2);
        
        //step 3 
        ans = reverse(ans);
        
        return ans;

        
    }
};