//{ Driver Code Starts
import java.io.*;
import java.lang.*;
import java.util.*;
import java.util.stream.*;

class GFG {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while (t-- > 0) {
            String s1 = br.readLine(); // first string
            String s2 = br.readLine(); // second string

            Solution obj = new Solution();

            if (obj.areAnagrams(s1, s2)) {
                System.out.println("true");
            } else {
                System.out.println("false");
            }
            System.out.println("~");
        }
    }
}
// } Driver Code Ends


class Solution {
    // Function is to check whether two strings are anagram of each other or not.
    public static boolean areAnagrams(String s1, String s2) {

        // Your code here
        HashMap<Character,Integer>mp=new HashMap<>();
        HashMap<Character,Integer>mp1=new HashMap<>();
        
        for(int i=0;i<s1.length();i++)
        {
            char ch=s1.charAt(i);
            if(mp.containsKey(ch))
            {
                mp.put(ch,(mp.get(ch))+1);
            }
            else{
                mp.put(ch,1);
            }
        }
         for(int i=0;i<s2.length();i++)
        {
            char ch=s2.charAt(i);
            if(mp1.containsKey(ch))
            {
                mp1.put(ch,(mp1.get(ch))+1);
            }
            else{
                mp1.put(ch,1);
            }
        }
        for(Map.Entry<Character,Integer>e:mp.entrySet())
        {
            char ch=e.getKey();
            int  val=e.getValue();
            if(mp1.containsKey(ch))
            {
                int val1=mp1.get(ch);
               
                if(val1!=val)
                {
                    return false;
                }
            }
            else{
                return false;
            }
           
        }
        for(Map.Entry<Character,Integer>e:mp1.entrySet())
        {
            char ch=e.getKey();
            int val=e.getValue();
            if(mp.containsKey(ch))
            {
                int val1=mp.get(ch);
                if(val1!=val)
                {
                    return false;
                }
            }
            else{
                return false;
            }
        }
        return true;
       
    }
}