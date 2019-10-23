import java.util.*;

public class Solution {

    void knakul853()
    {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String words[] = s.split(" ");
        HashMap<String , Integer>map  = new HashMap<>();
        ArrayList<String>ans = new ArrayList<String>();
       for(String word:words)
       {
          if(map.containsKey(word)){
              continue;
          }
          else{
          map.put(word , 1);
           ans.add(word);
          }
       }
       System.out.println("Modified String");
      for(String word:ans)
      {
          System.out.println(word + " ");
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


