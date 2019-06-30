#include "bits/stdc++.h"
#define MAXN 100009
#define INF 1000000007
#define mp(x,y) make_pair(x,y)
#define all(v) v.begin(),v.end()
#define pb(x) push_back(x)
#define wr cout<<"----------------"<<endl;
#define ppb() pop_back()
#define tr(ii,c) for(__typeof((c).begin()) ii=(c).begin();ii!=(c).end();ii++)
#define ff first
#define ss second
#define my_little_dodge 46
#define debug(x)  cerr<< #x <<" = "<< x<<endl;
using namespace std;

typedef long long ll;
typedef pair<int,int> PII;
template<class T>bool umin(T& a,T b){if(a>b){a=b;return 1;}return 0;}
template<class T>bool umax(T& a,T b){if(a<b){a=b;return 1;}return 0;}

/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction










// Written by : himanshu_0896 
#include <bits/stdc++.h>
using namespace std;
 
// #pragma comment(linker, "/stack:200000000")
// #pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
 
// #define _CRT_SECURE_NO_WARNINGS
 
typedef long long ll;
typedef std::vector<ll> vll;
typedef std::vector<std::vector<ll> > vvll;
typedef std::pair<ll, ll> pll;
typedef std::vector<pll> vpll;
 
// #define inchar          getchar_unlocked
// #define outchar(x)      putchar_unlocked(x)
// #define FIO
 
// template<typename T> void inpos(T &x){x=0;register T c=inchar();while(((c<48)||(c>57))&&(c!='-'))c=inchar();bool neg=false;if(c=='-')neg=true;for(;c<48||c>57;c=inchar());for(;c>47&&c<58;c=inchar())x=(x<<3)+(x<<1)+(c&15);if(neg)x=-x;}
// template<typename T> void outpos(T n){if(n<0){outchar('-');n*=-1;}char snum[65];ll i=0;do {snum[i++]=n%10+'0';n/=10;}while(n);i=i-1;while(i>=0)outchar(snum[i--]);outchar('\n');}
 
#define pb push_back
#define mset(a, b) memset(a, b, sizeof a)
#define all(x) (x).begin(), (x).end()
#define bit(x) (1 << (x))
#define bitl(x) (1LL << (x))
#define sqr(x) ((x) * (x))
#define sz(x) ((ll)(x.size()))
#define cnti(x) (__builtin_popcount(x)) //number of set bits in x
#define cntl(x) (__builtin_popcountll(x))
#define clzi(x) (__builtin_clz(x)) //position of leftmost bit from left 0 based indexing
#define clzl(x) (__builtin_clzll(x))
#define ctzi(x) (__builtin_ctz(x)) //position of rightmost bit from right 0 based indexing
#define ctzl(x) (__builtin_ctzll(x))
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define iter(it,a) for(auto it=a.begin();it!=a.end();it++)
 
#define X first
#define Y second
#define inf 2e18
#define neginf -10000000000000000
#define invalid -100000000000000000
 
#define prll(x) cout << #x << " = " << x << endl
#define prllv(x) rep(i, 0, sz(x)) cout << #x << "[" << i << "] = " << x[i] << endl
#define mod 1000000007
#ifndef FIO
#define read(a) rep(i, 0, sz(a)) cin >> a[i]
#else
#define read(a) rep(i, 0, sz(a)) inpos(a[i]);
#endif
