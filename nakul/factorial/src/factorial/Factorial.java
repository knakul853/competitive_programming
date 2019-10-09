/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package factorial;

import java.util.Scanner;
import java.math.BigInteger;

/**
 *
 * @author student
 */
public class Factorial {

    public static Scanner sc = new Scanner(System.in);
     
     void solve(int n)
     {
         
         BigInteger res = new BigInteger("1");
        for(int i=1;i<=n;i++)
        {
           res = res.multiply(BigInteger.valueOf(i));
        }
        System.out.println(res);
     }

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        Factorial obj= new Factorial();
        System.out.println("the number\n");
        int n = sc.nextInt();
        obj.solve(n);
        
    }
    
}
