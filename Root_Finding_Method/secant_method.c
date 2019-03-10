/*
in case it loops infinity (does on some of the ides) you can fix the iterations.
*/
#include<stdio.h>
#include<math.h>
int eq[1000];
int n;
double epsilon;

void swap(int *a,int *b)
{
    int tn = *a;
    *a=*b;*b=tn;
}
double func(double a)
{
    double sm=0;
    for(int i=0;i<=n;i++)
    {
       sm+=eq[i] * pow(a , n-i);
    }
    return sm;
}

double secant(double a, double b)
{
    double c = a;
    while(abs(b-a)>=epsilon)
    {
        c = (b*(func(a)) - a * (func(b)))/(func(a)-func(b));
        a=b;
        b=c;
    }
     return c;
}

int main()
{

  printf("enter the highest power\n");
  scanf("%d",&n);
  printf("enter the coeficient of equation\n");
  for(int i=0;i<=n;i++)
  {
      scanf("%d",&eq[i]);
  }
  printf("enter the Epsilon\n");
  scanf("%lf",&epsilon);

// loop to find a and  b such that  value of the product of the function becomes negative
  int a=0,b=0;
  int i=0,j=0;
  if(func(0)<0)
  {
    while(func(i)<=0 && func(j)<=0)
    {
        i++;j--;
    }
    if(func(i)>0){a=i-1;b=i;}
    else
    {
        a=j;b=j+1;
    }

  }
  else
  {
    while(func(i)>=0 && func(j)>=0)
    {
        i++;j--;
    }
    if(func(i)<0){a=i-1;b=i;}
    else
    {
        a=j;b=j+1;
    }
  }
    // ends of the loop
    if(a>0)swap(&a,&b); // just make 'a'  always negative :
  
  printf("%lf\n",secant(a,b));

    return 0;
}
