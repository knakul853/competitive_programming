void dijkstra(int source , int dest)
{
    set<pi>st;                                 // we can use priority queue as well.
    st.insert({0,source});                    // intialize the set with weight of source as zero.
    vector<int>dist(n+1,(int)1e18);           // inti...dist as infinite distance
    dist[source] = 0;                         // never forget this ://
    vector<int>parent(n+1,0);                  // need only when you need to print the path
    while(!st.empty())
    {
        auto node = *(st.begin());
        st.erase(node);
        int u = node.s;
        visit[u] = true;                       ///just to notice if the target is visited or not
        for(auto it : g[u])
        {
            int v= it.f;
            int w = it.s;

            if(dist[v] > dist[u] + w)
            {
                st.erase({dist[v],v});
                dist[v] = dist[u]  + w;
                st.insert({dist[v] , v});
                parent[v] = u;
                
            }
        }
    }

    if(visit[dest]==false){
        cout<<-1<<"\n";return;
    }

    vector<int>ans;
    int v = dest;
    while(parent[v])
    {
        ans.pb(v);
        v = parent[v];
    }
    ans.pb(source);
    reverse(ans.begin(),ans.end());
    for(auto it:ans)
    cout<<it<<" ";
    return;
    
}





/// : http://codeforces.com/contest/20/problem/C
/// : https://pastebin.com/YNMYYbAt
