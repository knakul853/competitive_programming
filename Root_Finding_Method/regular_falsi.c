
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

double bijection(double a, double b)
{
int k=0;
    double c = a ;
    while(abs(b-a)>= epsilon)
    {


        double tm =  (a*func(b) - b*func(a));
        c= tm/ (func(b) - func(a));
        if(func(c)==0.0)return c;

        if(func(a) * func(c) < 0)
        {
            b = c;
        }
        else
        a = c;

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
  
  printf("%lf\n",bijection(a,b));

    return 0;
}
