#include<bits/stdc++.h>
using namespace std;
int solve(int n,int price[])
{
     if(n==0)return 0;
     int max_val = -9479486;
     for(int i=1;i<=n;i++)
     {
         int cost = price[i-1] + solve(n-i,price);
         if(cost>max_val)
         {
             max_val = cost;
         }

     }
     return max_val;

}
int main()
{
    int n;
    cin>>n;
    int price[n];
    for(int i=0;i<n;i++)
    {
        cin>>price[i];
    }
        int ans = solve(n,price);
        cout<<ans<<endl;

}
