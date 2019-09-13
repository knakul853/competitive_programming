#include<bits/stdc++.h>
using namespace std;
#define pb push_back
// #define f first
// #define s second
const int N = 100;
//#define ll long long
int f(int a,int b,int mod)
{
    int res = 1;
    while(b)
    {
        if(b & 1)
        {
            res = ( res  * a ) % mod ;
        }
        b = b >> 1;
        a  = ( a  * a  ) % mod;
    }
    return res % 1000;
}
void solve()
{
    int a,b;
    cin >> a >> b;
    int first;
    double t = b * log10(a);
    t = t - (int)t;
    first = pow(10.0 , t) * 100;
    a%=1000;
    int second = f(a, b, 1000);
        printf("%d...%03d\n",first,second);
}

int32_t main()
{     
  int t;
  cin >> t;
  while(t--)
  {
      solve();
  }
return 0;

}

/// https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1970
/// https://pastebin.com/zTfF02XE
