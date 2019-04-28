/*
 reference taken from
 codewithc,
https://en.wikipedia.org/wiki/Gaussian_elimination
*/
#include<stdio.h>
#define db double
int N;

int main(){

      printf("Enter size\n");
     scanf("%d",&N);
     db A[N][N+1];
     db sol[N];
     for(int i=1;i<=N;i++)
     for(int j=1;j<=N+1;j++)
     {
          scanf("%lf",&A[i][j]);
     }
     

     for(int col=1;col<=N;col++)
     {
        for(int row=1;row<=N;row++)
        {
            if(row > col){

                db factor = A[row][col]/A[col][col];

                for(int k=1;k<=N+1;k++){
                    A[row][k]-=factor*A[col][k];
                }

            }
        }
     
     }
     
     sol[N] = A[N][N+1]/A[N][N];
     for(int row = N-1 ; row >=1;row-- )
     {
         db sm=0;
           for(int col = row + 1;col<=N;col++){
               
               sm+=sol[col]*A[row][col];

           }
           sol[row] = ( A[row][N+1] - sm ) / A[row][row];

     }


for(int i=1;i<=N;i++)
{
    printf("%lf  ",sol[i]);
}
    return 0;
}
