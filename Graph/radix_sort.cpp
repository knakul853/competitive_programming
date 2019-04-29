#include <math.h>
#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int n;
int a[1000];
const int range = 10;
int mx = -2;
void count_sort(int place){
    int fre[range] ={0};
    int ans[n];
    for(int i=0;i<n;i++)
    {
        fre[(a[i]/place) % range]++;
    }
    for(int i=1;i<range;i++){
        fre[i] = fre[i-1]+fre[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        ans[fre[(a[i]/place) % range]-1]= a[i];
        fre[(a[i] / place) % range]--;
    }
    for(int i=0;i<n;i++)
    {
        a[i] = ans[i];
    }
}

void radix_sort()
{
  int mul=1;
  while(mx){
      count_sort(mul);
      mx/=10;
      mul*=10;
  }

}
int main() {
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(mx<a[i])mx=a[i];
    }
    radix_sort();
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
