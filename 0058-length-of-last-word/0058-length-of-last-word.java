class Solution {
    public int lengthOfLastWord(String s) {
        
        int i=s.length()-1;
        while(s.charAt(i)==' ')
        {
            i--;
        }
        int count=0;
        while(s.charAt(i)!=' ')
        {
            count++;
            i--;
            if(i==-1)
            {
                break;
            }
        }
        return count;
        
    }
}