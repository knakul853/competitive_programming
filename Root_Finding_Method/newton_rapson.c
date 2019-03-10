/*
in case it loops infinity (does on some of the ides) you can fix the iterations.
*/
#include<stdio.h>
#include<math.h>
int eq[1000];
int diffeq[1000];
int n;
int m;
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

double dfunc(double a)
{
    double sm=0;
    for(int i=0;i<=m;i++)
    {
       sm+=diffeq[i] * pow(a , m-i);
    }
    return sm;
}


double scecent(double a)
{
    double b = func(a)/dfunc(a);
    while(abs(b)>=epsilon)
    {
        b= func(a)/dfunc(a);
        a=a-b;
        //printf("%lf",b);
    }
    return a;
}

int main()
{

// input equation
  printf("enter the highest power\n");
  scanf("%d",&n);
  printf("enter the coeficient of equation\n");
  for(int i=0;i<=n;i++)
  {
      scanf("%d",&eq[i]);
  }

// input diff. equation 
  printf("enter the highest power of diff. equation\n");
  scanf("%d",&m);
  printf("enter the coeficient of equation\n");
  for(int i=0;i<=m;i++)
  {
      scanf("%d",&diffeq[i]);
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
    a = (a+b)/2;
  
  printf("%lf\n",scecent(a));

    return 0;
}
