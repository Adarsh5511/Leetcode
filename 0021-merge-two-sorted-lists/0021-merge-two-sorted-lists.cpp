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
    void insertattail(ListNode* &head,ListNode* &tail,int data)
    {
        ListNode* newnode=new ListNode(data);
        
        if(tail==NULL)
        {
            tail=newnode;
            head=newnode;
            return;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
    }
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        
        ListNode* t1=list1;
        ListNode* t2=list2;
        ListNode* head=NULL;
        ListNode* tail=NULL;
        int i=0;
        
        vector<int>arr;
        
        while(t1!=NULL)
        {
            arr.push_back(t1->val);
            t1=t1->next;
        }
        while(t2!=NULL)
        {
            arr.push_back(t2->val);
            t2=t2->next;
        }
        
        sort(arr.begin(),arr.end());
        
        while(i<arr.size())
        {
            insertattail(head,tail,arr[i]);
            i++;
        }
        
        return head;
        
    }
};