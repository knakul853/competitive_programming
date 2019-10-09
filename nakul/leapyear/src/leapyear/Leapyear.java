/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package leapyear;

import java.util.Scanner;

/**
 *
 * @author student
 */
public class Leapyear {

  public static Scanner sc = new Scanner(System.in);
     
     void solve(int n)
     {
         int f=0;
         if(n %400==0)
         {
             f=1;
         }
         else if(n %100 !=0 && n%4==0)
         {
             f=1;
         }
         
         System.out.println(f==1?"Leap year":"Not leap Year");
     }

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
       
        System.out.println("Enter The year\n");
        int n = sc.nextInt();
        Leapyear obj = new Leapyear ();
        obj.solve(n);
        
    }
    
}
