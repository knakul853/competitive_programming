#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<vector<ll> >matrix;
const ll mod = 1000000007;
const int k = 2;
matrix mul(matrix A, matrix B)
{
    matrix C(k,vector<ll>(k));
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                C[i][j]+=(A[i][k]*A[k][j]) % mod;
            }
        }
    }
    return C;
}

matrix pow(matrix A,int p)
{
    if(p==1)return A;
    
    if(p%2)
    {
        return mul(A , pow(A,p-1));
    }
    matrix M = pow(A, p/2);
    return mul(M,M);
}

ll fib(ll n)
{
    matrix T(k , vector<ll>(k));
    T[0][0]=1;T[0][1]=1;
    T[1][0]=1;T[1][1]=0;
    T = pow(T,n-1);
    ll ans = T[0][0]*1+T[0][1]*0;
    return ans;
}
int main()
{
ll n;
   cin >> n;
   cout<<fib(n)<<endl;
    return 0;
}
