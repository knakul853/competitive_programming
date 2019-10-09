/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package checkprime;

import java.util.Scanner;

/**
 *
 * @author student
 */
public class Checkprime {

     public static Scanner sc = new Scanner(System.in);
     
     void solve(int n)
     {
         int []prime = new int[n+1];
         int []mark = new int[n+1];
         for(int i=0;i<=n;i++){
             mark[i]=1;
         }
         mark[0] = mark[1] = 0;
         
         for(int i=2;i*i<=n;i++)
         {
             if(mark[i]==1)
             {
                 for(int j = i;i*j<=n;j++)
                 {
                     mark[i*j] = 0;
                 }
             }
         }
         int k=0;
         
         for(int i=0;i<=n;i++)
         {
             if(mark[i]==1)
             {
                 prime[k++]=i;
             }
         }
         System.out.println("Enter the number you want to check\n");
         int sz = sc.nextInt();
         int f = 0;
         for(int i=2;i*i<=sz;i++)
         {
             if(sz%i==0)
             {
                 f=1;break;
             }
         }
         
         System.out.println(f==1?"Not prime":"Prime");
     }

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        Checkprime obj = new Checkprime();
        System.out.println("Enter Size of thr seive\n");
        int n = sc.nextInt();
        obj.solve(n);
        
    }
    
}
