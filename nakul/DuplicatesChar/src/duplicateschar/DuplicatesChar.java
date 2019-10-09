/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package duplicateschar;

import java.util.Scanner;

/**
 *
 * @author student
 */
public class DuplicatesChar {

   
     public static Scanner sc = new Scanner(System.in);
     
     void solve(String n)
     {
         int l = n.length();
         
         int []map = new int[256];
         for(int i=0;i<256;i++)map[i] = 0;
         
         for(int i=0;i<l;i++)
         {
            int t = n.charAt(i);
            map[t]++;
         }
         System.out.println("The reapeted string is\n");
         for(int i=0;i<256;i++)
         {
             if(map[i] >=2)
             {
                 System.out.print((char)(i));
                 
             }
         }
     }

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
       DuplicatesChar obj = new DuplicatesChar();
        System.out.println("Enter the string\n");
        String n = sc.nextLine();
        obj.solve(n);
        
    }
    
}
