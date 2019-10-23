import java.util.*;

public class Solution {

    void knakul853()
    {
        Scanner sc = new Scanner(System.in);
        int row;
        System.out.println("Enter no of rows\n");
        row = sc.nextInt();
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<=i;j++)
            {
                System.out.print("* ");
            }
             System.out.println();
        }
       
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

