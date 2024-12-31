class Solution {
public:
    int maximum69Number (int num) {

       
       string str=to_string(num);
       int maxi=num;
       bool flag=false;
       for(int i=0;i<str.size();i++)
       {
            if(str[i]=='6' && flag==false)
            {
                str[i]='9';
                int no=stoi(str);

                if(no>maxi)
                {
                    maxi=no;
                    flag=true;
                }
                else{
                    str[i]='6';
                }
            }

       }
       return maxi;

    }
};