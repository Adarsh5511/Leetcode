class Solution {
public:
    double angleClock(int hour, int minutes) {
        
        double h=(hour%12)*30+minutes*0.5;
        double m=minutes*6;
        
       double angle=abs(h-m);
        if(angle>180){
            angle=360-angle;
        }
        return angle;
    }
};