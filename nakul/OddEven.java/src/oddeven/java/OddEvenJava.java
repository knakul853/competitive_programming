/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package oddeven.java;
import java.util.Scanner;

/**
 *
 * @author student
 */
public class OddEvenJava {
    
    public static Scanner sc = new Scanner(System.in);

    /**
     * @param args the command line arguments
     * 
     * 
     */
    
    
    
    void solve(int n)
    {
        int res = n&1;
        System.out.println(res==0?"Even":"Odd");
        
    }
    public static void main(String[] args) {
        
        
        
        // TODO code application logic here
        
        int n = sc.nextInt();
        OddEvenJava sol = new OddEvenJava();
        
       sol.solve(n);
        
        
    }
    
}
System
        