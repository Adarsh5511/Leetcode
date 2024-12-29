class Solution {
public:

//    int faceup(vector<int>&tokens,int power)
//    {
//       int score=0;
//       for(auto i:tokens)
//       {
//         if(power>=i)
//         {
//             score++;
//             power=power-i;
//         }
//       }
//       return score;

//    }

//    int facedown(int i,vector<int>&tokens,int power,int score)
//    {
//      int modipower=power;
    
//      int maxi=INT_MIN;
//      for(int j=i;j<tokens.size();j++)
//      {
//          maxi=max(tokens[j],maxi);
//      }
     
    
//         modipower=maxi+power;
//         score-=1;
     
  
     
//      for(int j=i;j<tokens.size();j++)
//      {
//         if(tokens[j]!=maxi)
//         {
//             if(modipower>=tokens[j])
//             {
               
//                 score++;
//                 modipower-=tokens[j];
               
//             }
//         }
//      }

//      return score;

//    }

//    int face(int i,int j,vector<int>&tokens,int power,int score)
//    {
//           int h=i; 
//         for(int k=i;k<=j;k++)
//         {
//             if(tokens[k]<=power)
//             {
//                 h++;
//                 score++;
//                 power=power-tokens[k];
//             }
//         }
//         int maxi=score;
//         while(score!=0)
//         {
//              power+=tokens[j];
          
//         j--;
//         score--;
//         maxi=max(face(h,j,tokens,power,score),maxi);

//         }
//         return maxi;
//    }
   
    int bagOfTokensScore(vector<int>& tokens, int power) {
      
        int n=tokens.size();
        sort(tokens.begin(),tokens.end());
        int i=0;
        int maxscore=0;
        int score=0;
        int j=n-1;
        while(i<=j)
        {
            if(power>=tokens[i])
            {
                power=power-tokens[i];
                i++;
                score++;
              maxscore=max(maxscore,score);
            }
            else if(score>=1)
            {
                power+=tokens[j];
                j--;
                score--;
            }
            else{
                return maxscore;
            }
        }
        return maxscore;

    }
};