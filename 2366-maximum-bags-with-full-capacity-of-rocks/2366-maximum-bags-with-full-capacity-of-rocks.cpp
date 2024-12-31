class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {


        vector<pair<pair<int,int>,int>>v(capacity.size());

        for(int i=0;i<capacity.size();i++)
        {
            int diff=capacity[i]-rocks[i];
            v[i]={{capacity[i],rocks[i]},diff};
        }
      sort(v.begin(), v.end(), [](const auto &a, const auto &b) {
        return a.second < b.second; 
    });
       
        int i=0;
        int count=0;
        while(i<capacity.size())
        {
            // if(rocks[i]<capacity[i])
            // {
            //     int req=capacity[i]-rocks[i];
            //     if(req<=additionalRocks)
            //     {
            //         additionalRocks-=req;
            //         count++;
            //     }
            // }
            // else if(rocks[i]==capacity[i])
            // {
            //     count++;
            // }
             if(v[i].first.first==v[i].first.second)
             {
                count++;
             }

             else if(v[i].second<=additionalRocks)
             {
                 additionalRocks-=v[i].second;
                 count++;
             }

            i++;
        }
        return count;

        
    }
};