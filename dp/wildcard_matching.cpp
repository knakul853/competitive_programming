#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(string s,string p)
{
        int l = s.length();
    int m = p.length();

     bool dp[l+1][m+1];
      memset(dp,false,sizeof(dp));
    dp[0][0]=true;
      for(int i=1;i<=m;i++)
      {
        if(p[i-1]=='*'){
          dp[0][i] = dp[0][i-1];
        }
      }


    for(int i=1;i<=l;i++)
    {
        for(int j=1;j<=m;j++)
        {

            if(p[j-1]=='?' || s[i-1]==p[j-1])
            {
                dp[i][j] = dp[i-1][j-1];
            }
            else if(p[j-1]=='*')
            {

                dp[i][j] = dp[i-1][j]||dp[i][j-1];
            }
          else dp[i][j]=false;
        }

    }
return dp[l][m];

}
int main()
{
string s,p;
cin>>s>>p;
bool s = solve(s,p);
cout<<s<<endl;

}
