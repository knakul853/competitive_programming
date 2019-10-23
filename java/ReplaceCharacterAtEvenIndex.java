import java.util.*;

public class Solution {

    void knakul853()
    {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String ans="";
       for(int j=0;j<s.length();j++)
       {
           if(j%2==0 && j+2<s.length())
           {
              ans+=s.charAt(j+2);
           }
           else if(j%2==0)
           {
               ans+="1";
           }
           else ans+=s.charAt(j);  
       }

       System.out.println(ans);
       
    }

    public static void main(String[] args) {
        Solution obj = new Solution();
        obj.knakul853();
}
}

/*
    Read the problem before submitting ....Check on Multiple testcases.
    Leap of faith.....Leap of faith.....Leap of faith.....Leap of faith.....
  Guardian angel...Guardian angel...Guardian angel...Guardian angel...Guardian angel..
  
*/


