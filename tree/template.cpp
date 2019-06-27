/*
 tree template for the lca,subtree_size,fast_lca queries
*/
#include<bits/stdc++.h>
#define vi vector<int>
#define pb push_back
#define ll long long
using namespace std;
const int N=3e5;
const int LG = 20;

vi g[N];
int n;
ll Lvl[N], Sub[N], In[N], Out[N], Pre_In[N], Pre_Sub[N], P[N][LG];

void dfs(int u, int par)
{
    Lvl[u]=(par==-1? 0 : 1+Lvl[par]);
    Sub[u]=1;
    P[u][0]=par;
    for(auto v:g[u])
    {
        if(v==par) continue;
        dfs(v,u);
        Sub[u]+=Sub[v];
    }
}

void dfs1(int u, int par)
{
    In[u] = Sub[u]*(Sub[u]+1)/2;
    Out[u]= Sub[u]*(n-Sub[u]);
    for(auto v:g[u])
    {
        if(v==par) continue;
        In[u]-=Sub[v]*(Sub[v]+1)/2;
        dfs1(v,u);
    }
}

void dfs2(int u, int par)
{
    Pre_In[u] = (par==-1? In[u] : Pre_In[par] + In[u]);
    Pre_Sub[u]= (par==-1? 0 : Pre_Sub[par] + Sub[u]*(Sub[par]-Sub[u]));

    for(auto v:g[u])
    {
        if(v==par) continue;
        dfs2(v,u);
    }
}

void Build_all_Arrays()
{
    for(int i=0; i<LG; i++)
    {
        for(int j=0; j<n+1; j++) P[j][i]=-1;
    }

    dfs(1,-1);

    for (int i=1; i<LG; i++)
    {
        for(int j=1; j<n+1; j++)
            if (P[j][i-1] != -1)
            P[j][i] = P[P[j][i-1]][i-1];
    }

    dfs1(1,-1);
    dfs2(1,-1);
}

int lca(int u, int v)
{
    int i, lg;
    if (Lvl[u] < Lvl[v]) swap(u, v);

    for(lg = 0;(1<<lg)<=Lvl[u]; lg++);
    lg--;

    for(i=lg; i>=0; i--)
    {
        if (Lvl[u]-(1<<i) >= Lvl[v])
            u = P[u][i];
    }
    if (u == v) return u;

    for(i=lg; i>=0; i--)
    {
        if (P[u][i] != -1 and P[u][i] != P[v][i])
            u = P[u][i], v = P[v][i];
    }

    return P[u][0];
}


//Find The Parent of u at distance dis above
int FindParent(int u, int dis)
{
    int i,lg; dis = Lvl[u] - dis;
    for(lg=0; (1<<lg) <= Lvl[u]; lg++);
    lg--;

    for(i=lg; i>=0; i--)
    {
        if (Lvl[u] - (1<<i) >= dis)
            u = P[u][i];
    }

    return u;
}

void flush() 
{
        for (auto& v : g) v.clear();
}

int Lca, NodeBfrDes1, NodeBfrDes2, NodeBfrDes3, NodeBfrDes4;
void SolveQuery(int src, int des)
{
    Lca = lca(src,des); ll ans=0;

    //  Case_1 : When Src is Same as Des
    if(src==des)
    {
        ans = In[src] + Out[src];
    }

    //  Case_2 : When Src/Des is Lca (if Src=Lca then we swap src & des)
    else if (Lca==src || Lca==des)
    {
        if(Lvl[src]<Lvl[des]) swap(src, des);
        int NodeBfrDes = FindParent(src, Lvl[src]-Lvl[des]-1);

        //No. of ways for Src Nodes
        ans = In[src];

        //No. of ways for Nodes b/w Src and Des
        ans += (Pre_In[P[src][0]]-Pre_In[des]) - (Pre_Sub[src]-Pre_Sub[NodeBfrDes]);

        //No. of ways for Des Nodes
        ans += (In[des]+Out[des])-Out[NodeBfrDes];
    }

    //  Case_3 : When Lca is b/w Src and Des (1.Src->LcasChild 2.Des->LcasChild 3.Lca)
    else
    {
        //No. of ways for Nodes b/w Src and Lca
         NodeBfrDes1 = FindParent(src, Lvl[src]-Lvl[Lca]-1);
         NodeBfrDes2 = FindParent(src, Lvl[src]-Lvl[Lca]-2);

        ans += In[src];
        ans += (Pre_In[P[src][0]]-Pre_In[NodeBfrDes1]) - (Pre_Sub[src]-Pre_Sub[NodeBfrDes2]);
        ans += In[NodeBfrDes1]-(Sub[NodeBfrDes2] * (Sub[NodeBfrDes1]-Sub[NodeBfrDes2]));

        //No. of ways for Nodes b/w Des and Lca
         NodeBfrDes3 = FindParent(des, Lvl[des]-Lvl[Lca]-1);
         NodeBfrDes4 = FindParent(des, Lvl[des]-Lvl[Lca]-2);

        ans += In[des];
        ans += (Pre_In[P[des][0]]-Pre_In[NodeBfrDes3]) - (Pre_Sub[des]-Pre_Sub[NodeBfrDes4]);
        ans += In[NodeBfrDes3]-(Sub[NodeBfrDes4] * (Sub[NodeBfrDes3]-Sub[NodeBfrDes4]));


        //No. of ways for Nodes For Lca
        ans += (In[Lca]+Out[Lca]) + (Sub[NodeBfrDes1]*Sub[NodeBfrDes3]); 
        ans -= Out[NodeBfrDes1]+Out[NodeBfrDes3];
    }

   printf("%ld\n",ans);
}


//God Function
int main() {

    int t,q;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d", &n, &q);
        int v,u,src,des;

        for(int i=1; i<n; i++)
        {
            scanf("%d %d", &u, &v);
            g[u].pb(v); g[v].pb(u);
        }

        Build_all_Arrays();

        while(q--)
        {
             scanf("%d %d", &src, &des);
             SolveQuery(src,des);
        }

        flush();
    }
}
