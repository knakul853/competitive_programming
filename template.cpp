  #include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define inf (int)1e16

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
// templates
/*#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
/*template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;*/

/// Some frequent usable functions
void add(int &a,int b){a+=b;if(a>mod)a-=mod;}
void sub(int &a,int b){a-=b;if(a<0)a+=mod;}
void mul(int &a, int b) {a=1ll * a * b % mod;}
int exp(int a,int b)
{int res = 1;while(b){if(b&1){res = (res * a)%mod;}b= b/2;a = (a*a)%mod;}return res;}

int gcd(int a, int b, int &x, int &y) {if (a == 0) {x = 0; y = 1;return b;
}int x1, y1;int d = gcd(b%a, a, x1, y1); x = y1 - (b / a) * x1;y = x1;return d;}
//int find(int v){return v==parent[v]?v:parent[v] = find(parent[v]);}
// void merge(int i,int j)
// {i = find(i);j = find(j);if(i == j)return;parent[parent[i]] = parent[j];cmp--;}

// Directions.......
/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight moves
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define sp(a , x) cout << fixed << setprecision(a) << x << endl; 
#define endl "\n"
#define pb push_back
#define F first
#define S second
#define mset(a, b) memset(a, b, sizeof a)
#define int                        long long
#define sz(x) ((ll)(x.size()))
#define sqr(x) ((x) * (x))
#define graph vector<int>
#define vi vector<int>
#define pi pair<int,int>
#define all(c)                      c.begin() , c.end()
#define rep(i,a)                    for(int i=0;i<a;i++)
#define rep1(i,a)                   for(int i=1;i<=a;i++)
#define iter(it,a) for(auto it=a.begin();it!=a.end();it++)
#define PQ priority_queue<pi, vector<pi>, greater<pi>>


/// define some data..
void solve()
{
   
}
int32_t main()
{
   int test=1;
   //cin >> test;
   while(test--)
   {
     solve();
 
   }
 
}


/*
Read the problem correctly..Read the problem correctly..Read the problem correctly..
leap of faith..leap of faith..leap of faith..leap of faith..leap of faith..leap of faith..
*/
