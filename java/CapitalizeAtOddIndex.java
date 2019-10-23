import java.util.*;

public class Solution {

    void knakul853()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter  String\n");
        String s= sc.nextLine();
        String ans="";
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)==' ' || i%2==0){
                ans+=s.substring(i,i+1);
                continue;
            }
            ans+=s.substring(i,i+1).toUpperCase();
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


