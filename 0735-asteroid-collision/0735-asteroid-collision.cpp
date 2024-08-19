class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        vector<int>ans;
        stack<int>st;
        for(int i=0;i<asteroids.size();i++){
            bool push_=true;
            while(!st.empty() && st.top()>0 && asteroids[i]<0){
                int top=abs(st.top());
                if(top<abs(asteroids[i])){
                    st.pop();
                }
                else if(top==abs(asteroids[i])){
                    push_=false;
                    st.pop();
                    break;
                }
                else if(top>abs(asteroids[i])){
                    push_=false;
                    break;
                }
                
            }
            if(push_){
                st.push(asteroids[i]);
            }
           
        }
        while(!st.empty()){
            int top=st.top();
            ans.push_back(top);
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};