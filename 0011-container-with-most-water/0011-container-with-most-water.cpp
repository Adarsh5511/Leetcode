class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int maxarea=0;
        int lp=0;
        int rp=height.size()-1;
        while(lp<rp){
            
            int w=rp-lp;
            int h=min(height[lp],height[rp]);
            int area=w*h;
            maxarea=max(maxarea,area);
            
            if(height[lp]<height[rp]){
                lp++;
            }
            else{
                rp--;
            }
            
        }
        return maxarea;
    }
    
};