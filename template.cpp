  
#include<bits/stdc++.h>
using namespace std;

/// Debugging shits start here...

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

/// Debugging shits ends here...

// Directions.......
/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight moves
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction

#define pb push_back
#define F first
#define S second
#define mset(a, b) memset(a, b, sizeof a)
#define int                        long long
#define sz(x) ((ll)(x.size()))
#define sqr(x) ((x) * (x))

#define vi vector<int>
#define pi pair<int,int>
#define all(c)                      c.begin() , c.end()
#define rep(i,a)                    for(int i=0;i<a;i++)
#define rep1(i,a)                   for(int i=1;i<=a;i++)
#define iter(it,a) for(auto it=a.begin();it!=a.end();it++)

const int mod = (int)1e9+7;
int inf = (int)2e18;
const int N = (int)1e5+7;

/// Some frequent usable functions
int gcd(int a, int b, int &x, int &y) {if (a == 0) {x = 0; y = 1;return b;
}int x1, y1;int d = gcd(b%a, a, x1, y1); x = y1 - (b / a) * x1;y = x1;return d;}
 
vector<set<int>>g;
int v,e;


void solve()
{
    
  
 
}
int32_t main()
{
   int t=1;
  // cin >> t;
   while(t--)
   {
     solve();
 
   }
 
 
 
}
