/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fibbonacii;

import java.util.Scanner;

/**
 *
 * @author student
 */
public class Fibbonacii {
public static Scanner sc = new Scanner(System.in);
     
     void solve(int n)
     {
         int [] f = new int[n+1];
         f[0]=0;
         f[1]=1;
         
         
         for(int i=2;i<n+1;i++)
         {
             f[i] = f[i-1]+f[i-2];
         }
         
         System.out.println(f[n]);
     }

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        Fibbonacii obj= new Fibbonacii();
        System.out.println("the number\n");
        int n = sc.nextInt();
        obj.solve(n);
        
    }
    
}
