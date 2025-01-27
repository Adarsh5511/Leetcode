/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    
    let j=s.length-1;
    let cnt=0;
    let flag=false;
    while(j>=0)
    {
        if(s[j]===' ')
        {
            
            if(cnt!==0)
            {
                break;
            }
            j--;
        }
        else{
            
            cnt++;
            j--;
        }
       
    }

    return cnt;
    



};