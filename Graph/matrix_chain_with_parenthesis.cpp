#include <math.h>
#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int n;
int p[1000];
int bracket[1000][1000];
int dp[1000][1000];
void print(int i,int j,char &ans)
{
    if(i == j)
    {
        cout<<(char)ans;
        ans++;
    }
    else{
    cout<<"(";
    print(i,bracket[i][j],ans);
    print(bracket[i][j]+1,j,ans);
    cout<<")";}
}


void solve()
{
    for(int l=2;l<n;l++)
    {
        for(int i=1;i<n-l+1;i++)
        {
            int j = i+l-1;
            dp[i][j] = INT_MAX;
            for(int k=i;k<=j-1;k++)
            {
                int temp = dp[i][k] + dp[k+1][j] + p[i-1]*p[k]*p[j];
                if(temp < dp[i][j])
                {
                   dp[i][j] = temp;
                   bracket[i][j] = k;
                }
            }
        }
    }
    cout<<dp[1][n-1];
    return;

}


int main() {
    cin >>n;
    for(int i=0;i<n;i++)
    {
        cin >> p[i];
        dp[i][i] = 0;
    }
    char ans = 'A';
    solve();
    cout<<endl;
    print(1,n-1,ans);
}
