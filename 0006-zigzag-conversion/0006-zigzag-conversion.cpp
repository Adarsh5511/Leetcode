class Solution {
public:
string convert(string s, int numRows) {
  vector<string>zigzag(numRows);
  bool direction=true;
  int row=0;
  int i=0;
  if(numRows==1) return s;
  
  while(true)
  {
    if(direction)
    {
     while(row<numRows && i<s.size())
     {
       zigzag[row].push_back(s[i]);
       i++;
       row++;
     }
     row=numRows-2;
    }
    else
    {
      while(row>=0 && i<s.size())
     {
       zigzag[row].push_back(s[i]);
       i++;
       row--;
     }
     row=1;

    }

    if(i>=s.size()) break;
    direction = !direction;
   
 

  }
   string ans="";
   for(int i=0;i<zigzag.size();i++)
   {
       ans +=zigzag[i];
   }
     
     return ans;
}
   
};