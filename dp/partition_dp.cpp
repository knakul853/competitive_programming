#include<bits/stdc++.h>
using namespace std;
bool solve(int a[],int sum,int n)
{
    bool dp[n+1][sum+1];
    for(int i=1;i<=sum;i++)
    {
        dp[0][i] = false;
    }
    for(int i=0;i<=n;i++)
    {
        dp[i][0] = true;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(a[i-1]>j)dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = dp[i-1][j]||dp[i-1][j-a[i-1]];

        }

    }
            return dp[n][sum];


}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int sum=accumulate(a,a+n,0);
    bool ans =  !(sum&1)?solve(a,sum/2, n):0;
    cout<<ans<<endl;



}
