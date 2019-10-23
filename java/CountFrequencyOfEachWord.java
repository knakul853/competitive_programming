import java.util.*;

public class Solution {

    void knakul853()
    {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String words[] = s.split(" ");
        HashMap<String , Integer>map  = new HashMap<>();
       for(String word:words)
       {
          if(map.containsKey(word)){
              int cnt = map.get(word);
              map.put(word , cnt + 1);
          }
          else
          map.put(word , 1);
       }
       for(Map.Entry<String,Integer> entry : map.entrySet())
       {
           int val = entry.getValue();
           String key = entry.getKey();
           System.out.println(key + " " + val);
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


