import java.util.*;

public class Solution {

    void print(int mat[][],int size)
    {
         for(int i=0;i<size;i++)
          {
              for(int j=0;j<size;j++)
              {
                   System.out.print(mat[i][j]+ " ");
              }
              System.out.println();
          }
    }

    void solve(int mat1[][],int mat2[][],int size , int operation)
    {
        if(operation == 1)
        {
          for(int i=0;i<size;i++)
          {
              for(int j=0;j<size;j++)
              {
                    mat1[i][j] = mat1[i][j] + mat2[i][j];
              }
          }

          print(mat1 , size);
        }

       else if(operation == 2)
        {
            for(int i=0;i<size;i++)
          {
              for(int j=0;j<size;j++)
              {
                    mat1[i][j] = mat1[i][j] - mat2[i][j];
              }
          }

          print(mat1 , size);
        }
        else 
        {
          int ans[][] = new int[size][size];
          for(int i=0;i<size;i++)
          {
              for(int j=0;j<size;j++)
             {
                 int sm = 0;
              for(int k=0;k<size;k++)
              {
                   sm+=mat1[i][k] * mat2[k][j];
              }
              ans[i][j] = sm;
              
             }
          }

          print(ans , size);
          
      }
    }


    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int row = sc.nextInt();
        int col = sc.nextInt();
        Solution obj = new Solution();
        int mat1[][] = new int[row][col];
        System.out.println("Enter the Elements of 1st matrix row wise");
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                int n = sc.nextInt();
                mat1[i][j] = n;
                
            }
            
        }

         int mat2[][] = new int[row][col];
        System.out.println("Enter the Elements of 2nd matrix row wise");
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                int n = sc.nextInt();
                mat2[i][j] = n;
                
            }
            
        }
        System.out.println("1. addition , 2. substraction , 3. multiplication");
        int n = sc.nextInt();
        
        obj.solve(mat1 ,mat2 , row  , n);



    }
}

/*
    Read the problem before submitting ....Check on Multiple testcases.
    Leap of faith.....Leap of faith.....Leap of faith.....Leap of faith.....
  Guardian angel...Guardian angel...Guardian angel...Guardian angel...Guardian angel..

*/


