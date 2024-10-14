class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<int>indegree(numCourses,0);
        vector<vector<int>>adjlist(numCourses);
        queue<int>q;
        
        for(auto it:prerequisites)
        {
            int first=it[0];
            int second=it[1];
            adjlist[second].push_back(first);
            indegree[first]++;
        }
        
        for(int i=0;i<numCourses;i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
        int count=0;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            count++;
            for(auto it:adjlist[node])
            {
                indegree[it]--;
                if(indegree[it]==0)
                {
                    q.push(it);
                }
            }
        }
        cout<<count;
        if(count==numCourses)
        {
            return true;
        }
        return false;
        
    }
};