import java.util.*;

public class Solution {

    void knakul853()
    {
        Scanner sc = new Scanner(System.in);
        ArrayList<String>ans = new ArrayList<String>();
        String s = sc.nextLine();
        String check="and"; // Here puth whatever sequence you want.
        String words[] = s.split(" ");
        for(int i=words.length-1;i>=0;i--)
        {
            String word = words[i];
            if(word.equals(check))
            {
                break;
            }
            ans.add(word);
          
        }
        Collections.reverse(ans);
        for(String c:ans)
        {
            System.out.print(c + " ");
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


