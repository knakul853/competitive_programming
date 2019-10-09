/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package findascii;

import java.util.Scanner;

/**
 *
 * @author student
 */
public class FindAscii {

  
     public static Scanner sc = new Scanner(System.in);
     
     void solve(char n)
     {
        int ans = (int)n;
        System.out.println(ans);
     }

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        FindAscii obj = new FindAscii();
        System.out.println("Enter the character\n");
       char c = sc.next().charAt(0);
        obj.solve(c);
        
    }
    
}
