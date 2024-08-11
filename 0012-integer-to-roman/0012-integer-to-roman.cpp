class Solution {
public:
    string intToRoman(int num) {
        
        string ans="";
        vector<string>temp;
      vector<pair<int,string>>v{
            {1,"I"},
            {4,"IV"},
            {5,"V"},
            {9,"IX"},
            {10,"X"},
            {40,"XL"},
            {50,"L"},
            {90,"XC"},
            {100,"C"},
            {400,"CD"},
            {500,"D"},
            {900,"CM"},
            {1000,"M"}
            };
        int tem=num;
        int i=v.size()-1;
        while(tem>0)
        {
            if(tem>=v[i].first && i>=0){
                temp.push_back(v[i].second);
                tem=tem-v[i].first;
            }
            else if(tem<v[i].first && i>=0)
            {
                i--;
            }
        }
        for(auto it:temp)
        {
            ans+=it;
        }
        return ans;


    }
};