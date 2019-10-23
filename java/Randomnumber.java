import java.util.*;

public class Solution {


    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Solution obj = new Solution();
        ArrayList<Integer>a = new ArrayList<Integer>();
        for(int i=0;i<n;i++)
        {
            int num = new Random().nextInt(n);
            a.add(num);
        }
        Collections.sort(a);
        for(int c:a){
            System.out.print(c + " ");
        }
        System.out.println();


    }
}

/*
    Read the problem before submitting ....Check on Multiple testcases.
    Leap of faith.....Leap of faith.....Leap of faith.....Leap of faith.....
  Guardian angel...Guardian angel...Guardian angel...Guardian angel...Guardian angel..

*/


