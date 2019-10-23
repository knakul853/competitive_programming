import java.util.*;

public class Solution {

    void Rock_Paper_Scissor()
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Press 1 to exit\n");
        int t=1;
        while(t>0)t--;{
        System.out.println("Press 1 -> Rock ,2 -> Paper , 3 -> Scissor\n");
        System.out.println("Player 1 Turn\n");
        int p1 = sc.nextInt();
        System.out.println("Player 2 Turn\n");
        int p2 = sc.nextInt();
        boolean ans=false;
        ans = (p1==1&&p2==3);
        ans|=(p1==2 &&p2==1);
        ans|=(p1==3&&p2==2);
        if(p1==p2)
        {
            System.out.println("Draw Bitchh\n");     
        }
        else
        System.out.println((ans)?"Player 1 Wins":"Player 2 Wins\n");

       }
        
    }

   

    public static void main(String[] args) {
        Solution obj = new Solution();
        obj.Rock_Paper_Scissor();
        

       }
}

/*
    Read the problem before submitting ....Check on Multiple testcases.
    Leap of faith.....Leap of faith.....Leap of faith.....Leap of faith.....
  Guardian angel...Guardian angel...Guardian angel...Guardian angel...Guardian angel..
  
*/


