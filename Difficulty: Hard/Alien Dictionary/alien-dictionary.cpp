//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    void creategraph(string s1,string s2,int n,int k,vector<vector<int>>&graph)
    {
        int i=0;
        int j=0;
        while(i<s1.size() && j<s2.size())
        {
            if(s1[i]!=s2[j])
            {  
                int from=s1[i]-'a';
                int to=s2[j]-'a';
                graph[from].push_back(to);
                break;
            }
            i++;
            j++;
        }
        
    }
  
    string findOrder(string dict[], int n, int k) {
        // code here
        
        vector<vector<int>>graph(k);
        queue<int>q;
        
        for(int i=0;i<n;i++)
        {
            if(i+1<n)
            {
            creategraph(dict[i],dict[i+1],n,k,graph);
            }
        }
        
        vector<int>indegree(k,0);
        
        for(int i=0;i<k;i++)
        {
            for(auto it:graph[i])
            {
                indegree[it]++;
            }
        }
        
        for(int i=0;i<k;i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
      vector<int>ans;
      while(!q.empty())
      {
          int node=q.front();
          q.pop();
          ans.push_back(node);
          for(auto it:graph[node])
          {
              indegree[it]--;
              if(indegree[it]==0)
              {
                  q.push(it);
              }
          }
      }
        
        if (ans.size() == k) {
        string result;
        for (int i : ans) {
            result += (char)(i + 'a');  // Convert index back to character
        }
        return result;
    }

    // Return empty string if valid order is not possible
    return "";
        
        
    }
};

//{ Driver Code Starts.
string order;

bool f(string a, string b) {
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < min(a.size(), b.size()) and p1 == p2; i++) {
        p1 = order.find(a[i]);
        p2 = order.find(b[i]);
        //	cout<<p1<<" "<<p2<<endl;
    }

    if (p1 == p2 and a.size() != b.size())
        return a.size() < b.size();

    return p1 < p2;
}

// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        string dict[N];
        for (int i = 0; i < N; i++)
            cin >> dict[i];

        Solution obj;
        string ans = obj.findOrder(dict, N, K);
        order = "";
        for (int i = 0; i < ans.size(); i++)
            order += ans[i];

        string temp[N];
        std::copy(dict, dict + N, temp);
        sort(temp, temp + N, f);

        bool f = true;
        for (int i = 0; i < N; i++)
            if (dict[i] != temp[i])
                f = false;

        if (f)
            cout << 1;
        else
            cout << 0;
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends