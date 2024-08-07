//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    
    Node* middle(Node* head)
    {
        Node*fast=head;
        Node*slow=head;
        
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
    
    Node* reverse(Node* head)
    {
        if(head->next==NULL)
        {
            return head;
        }
        Node*prev=NULL;
        Node*curr=head;
        
        while(curr!=NULL)
        {
            Node*nexnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nexnode;
            
        }
        
        return prev;
    }
    
    bool compare(Node*head1,Node*head2)
    {
        Node* temp1=head1;
        Node*temp2=head2;
        
        while(temp1!=NULL && temp2!=NULL)
        {
            if(temp1->data!=temp2->data)
            {
                return false;
            }
            else{
                temp1=temp1->next;
                temp2=temp2->next;
            }
        }
        return true;
    }
    
    bool isPalindrome(Node *head)
    {
        
        if(head->next==NULL)
        {
            return true;
        }
        Node* mid=middle(head);
        
        
        Node* newhead=mid->next;
        Node* reversed=reverse(newhead);
        
        
        bool ans=compare(head,reversed);
        
        return ans;
        
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends