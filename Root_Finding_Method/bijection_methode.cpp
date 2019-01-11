
#include<bits/stdc++.h>
using namespace std;
int eq[1000];
int n;
double epsilon;
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

    double c = (a + b)/2.0 ;
    int k=0;
    cout<<"ite"<<"\t\t"<<"A"<<"\t\t"<<"B"<<"\t\t"<<"C"<<"\t\t"<<"F(C)"<<"\t\t"<<"error"<<"\n";
    cout<<"__________________________________________________________________________"<<endl;
    while(abs(b-a)>= epsilon)
    {
  cout<<k++<<"\t"<<a<<"\t"<<b<<"\t"<<c<<"\t"<<func(c)<<"\t"<<abs(b-a)<<"\n";


        c = (a + b)/2.0;
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

  cout<<"enter the highest power"<<"\n";
  cin >> n;
  cout<<"enter the coeficient of equation"<<"\n";
  for(int i=0;i<=n;i++)
  {
      cin >> eq[i];
  }
  cout<< "enter the Epsilon"<<"\n";
  cin >> epsilon;
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
  
  cout<<bijection(a,b)<<endl;

    return 0;
}
