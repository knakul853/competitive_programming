/*
Referance taken from
codewithc

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
            if(row != col){

                db factor = A[row][col]/A[col][col];

                for(int k=1;k<=N+1;k++){
                    A[row][k]-=factor*A[col][k];
                }

            }
        }
     
     }
     

     for(int i=1;i<=N;i++)
     {
         sol[i] = A[i][N+1]/A[i][i];

     }
     
     

for(int i=1;i<=N;i++)
{
    printf("%lf  ",sol[i]);
}
    return 0;
}
