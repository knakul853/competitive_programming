import java.util.*;

public class Solution {

    void knakul853()
    {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int a=0,e=0,i=0,o=0,u=0;
       for(int j=0;j<s.length();j++)
       {
         if(s.charAt(j)=='a')a++;
         if(s.charAt(j)=='e')e++;
         if(s.charAt(j)=='i')i++;
         if(s.charAt(j)=='o')o++;
         if(s.charAt(j)=='u')u++;
       }
       System.out.println("Count of Vowels");
          System.out.println("a " + a + "\n"+"e " + e + "\n" +"i " + i + "\n" +"o " + o + "\n" +"u " + u + "\n");

        
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


