import java.util.*;

public class Solution {

    void nakul()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter  Words\n");
        String s= sc.nextLine();
        String words[] = s.split(" ");
        String ans = "";

        for(String word:words)
        {
            int l = word.length();
            String res = word.substring(0,1).toUpperCase()+word.substring(1,l);
            ans+=res+" ";
        }
        System.out.println(ans);
    }


    public static void main(String[] args) {
        Solution obj = new Solution();
        obj.nakul();
}
}

/*
    Read the problem before submitting ....Check on Multiple testcases.
    Leap of faith.....Leap of faith.....Leap of faith.....Leap of faith.....
  Guardian angel...Guardian angel...Guardian angel...Guardian angel...Guardian angel..
  
*/


