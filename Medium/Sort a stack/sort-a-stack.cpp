//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */


void inserted_sorted(stack<int>&s,int ele)
{
    if(s.empty() || ele>s.top())
    {
        s.push(ele);
        return;
    }
    int temp=s.top();
    s.pop();
    
     inserted_sorted(s,ele);
     
     s.push(temp);
    
    
}

void popi(stack<int>&s)
{
   if(s.empty())
   {
       return;
   }
   
   int ele=s.top();
   s.pop();
   
   popi(s);
   
   inserted_sorted(s,ele);
   
   
}


void SortedStack :: sort()
{
    
    popi(s);
    
   //Your code here
}