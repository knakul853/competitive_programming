/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package checkpalindrome;

import java.util.Scanner;

/**
 *
 * @author student
 */
public class Checkpalindrome {

     public static Scanner sc = new Scanner(System.in);
     
     void solve(String n)
     {
         int l = n.length();
         
         int f=0;
         int md = (int)l/2;
         for(int i=0;i<md;i++)
         {
             char c1 = n.charAt(i);
             char c2 = n.charAt(l-i-1);
             if(c1 != c2)
             {
                 f=1;
                 break;
             }
                 
         }
         System.out.println(f==1?"Not palindrome":"Palindrome");
     }

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
       Checkpalindrome obj = new Checkpalindrome();
        System.out.println("Enter the string\n");
        String n = sc.nextLine();
        obj.solve(n);
        
    }
    
}
