import java.util.*;

public class Solution {

    void knakul853()
    {
        Scanner sc = new Scanner(System.in);
        int row;
        System.out.println("Enter no of rows\n");
        row = sc.nextInt();

        // First Half
        int start = (row)/2;
        int l = 0;
        for(int i=0;i<row&&start>=0;i++)
        {
            String ans="";
            for(int j=0;j<start;j++)
            {
                ans+=" ";
            }
            int t = 2*l+1;
            while(t-->0)
            {
                ans+="*";
            }
            System.out.println(ans);
            start --;
            l++;
              
        }
        // Second Half
       
       start = 0;
       l = row;
       for(int i=0;i<row;i++)
       { String ans="";
           for(int j=0;j<start;j++)
           {
               ans+=" ";
           }
        int tm = l;
        while(tm-->0)
        {
            ans+="*";
        }
        l-=2;
        start++;
        System.out.println(ans);
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

