import java.util.*;

interface A1{
  public  boolean checkPrime(int input);

}

class InterfaceDemo implements A1{
     public  boolean checkPrime(int input)
       {
           int f = 0;
           for(int i=2;i*i<=input;i++)
           {
               if(input%i==0){f=1;break;}
           }
           return f==0;
       }
}

public class Solution {

    void knakul853()
    {
        InterfaceDemo obj = new InterfaceDemo();
        boolean ans = obj.checkPrime(34);
        System.out.println((ans)?"Prime":"Not Prime");
       
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

