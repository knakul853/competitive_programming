#include<stdio.h>

int main(){
  int n;
   scanf("%d",&n);
   double a[n][n];
   double y[n];
   double b[n];
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<n;j++)
      {
          scanf("%lf",&a[i][j]);
      }
   }

   for(int i=0;i<n;i++)
   {
     scanf("%lf",&b[i]);

     y[i]=0;
   }

   double sum=0;
   int maxitr;
   printf("Enter Maximum Iteration\n");
   scanf("%d",&maxitr);  
   for(int k=0;k<=maxitr;k++)
   {
     for(int i=0;i<n;i++)
     {
       sum=0;
       for(int j=0;j<n;j++)
       {
         if(j!=i)
         {
           sum+=a[i][j]*y[j];
         }
       }
       printf("x%d = %f\n",i+1,y[i]);
       y[i] = (1/a[i][i])*(b[i] - sum);

     }
   }

   for(int i=0;i<n;i++)
   {
     printf("%lf  ",y[i]);
   }
   

}
