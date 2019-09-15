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
    return res % mod;
}

/// : https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1970
/// :  https://pastebin.com/zTfF02XE

/// : http://www.spoj.com/problems/LOCKER/
/// : https://pastebin.com/Spwz4HhG

/// : https://www.spoj.com/problems/ZSUM/
/// : https://pastebin.com/qSGj9smt



TODO : 
///https://icpcarchive.ecs.baylor.edu/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1723
///http://codeforces.com/problemset/problem/630/I
