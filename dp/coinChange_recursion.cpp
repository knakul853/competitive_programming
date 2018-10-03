#include<bits/stdc++.h>
using namespace std;
int solve(int n,int coin[],int N)
{
    if(N==0)return 0;
    if(N<0)return INT_MAX;
    int coins = INT_MAX;
    for(int i=0;i<n;i++)
    {
        int res = solve(n,coin,N-coin[i]);
        if(res!= INT_MAX)
            coins = min(res+1,coins);

    }
    return coins;
}
int main()
{
    int n;
    int N;
    cin>>N;
    cin>>n;
    int coin[n];
    for(int i=0;i<n;i++)
    {
        cin>>coin[i];
    }
        int ans = solve(n,coin,N);
        cout<<ans<<endl;

}
