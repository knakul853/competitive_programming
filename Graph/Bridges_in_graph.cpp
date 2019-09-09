void dfs(int v,int p = -1)
{
   visit[v] = 1;
    tmin[v] = low[v] = t++;
    int child = 0;
    for(auto u:g[v])
    {
        if(p==u)continue;
        if(visit[u])
        {
            low[v] = min(low[v] , tmin[u]);
        }
        else
        {
              dfs(u,v);
              low[v] = min(low[v] , low[u]);
              if(tmin[v] < low[u])   // v --> u is bridge iff it is not back edges 
              {  int a  = u,b= v;
                if(a>b)swap(a,b);
                  ans.insert({a,b});
                  
            }
        }
    }
   
}

problems and solutions :
/// http://www.spoj.com/problems/EC_P/
// https://pastebin.com/69d9xW47



//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=737
///https://pastebin.com/Nn3vzMcq
