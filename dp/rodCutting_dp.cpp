#include<bits/stdc++.h>
using namespace std;
int solve(int n,int price[])
{
    int dp[n+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=i;j++)
        {
            dp[i] = max(dp[i],dp[i-j]+price[j-1]);
        }
    }
    return dp[n];
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
