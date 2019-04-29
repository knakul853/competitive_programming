#include <math.h>
#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int n;
int a[100000];
int aux[1000000];
int mx = -1;
int main() {
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(mx<a[i])mx=a[i];
        aux[a[i]]++;
    }
    int j=0;
    for(int i=0;i<100000;i++)
   {
         int temp = aux[i];
         while(temp--){
             a[j++] = i;
         }
   }
   for(int i=0;i<n;i++)
   cout<<a[i]<<" ";
}
