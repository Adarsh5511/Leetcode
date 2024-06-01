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
            // return;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }

    // int length(ListNode* head,int count)
    // {
    //     while(head!=NULL)
    //     {
    //         count++;
    //         head=head->next;
    //     }
    //     return count;
    // }
    
    ListNode* sortList(ListNode* head)
    
    {
        if(head==NULL)
        {
            return NULL;
        }
        // int c=0;
       // int  count=length(head,c);
        vector<int>arr;
        ListNode* list=NULL;
        ListNode* sortedlist=NULL;
        int l=0;
        ListNode* t1=head;
       while(t1!=NULL)
       {
          arr.push_back(t1->val);
           l++;
           t1=t1->next;
       }
    
//        for(int i=0;i<count;i++)
//        {
          
//            for(int j=i+1;j<count;j++)
//            {
//                 int temp=0;
//                if(arr[i]>arr[j])
//           { 
//                    temp=arr[i];
//                    arr[i]=arr[j];
//                    arr[j]=temp;
//           }
               
//         }
       // }
        sort(arr.begin(),arr.end());

        int k=0;
        
        while(k<arr.size())
        {
          insertattail(sortedlist,list,arr[k]);
            // count<<k;
            k++;
            
        }
        
        
        
        
        return sortedlist;
    }
};