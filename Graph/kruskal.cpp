#include<bits/stdc++.h>

using namespace std;
const int mx = 10000;
pair<int,pair<int,int> >p[mx];
int parent[mx];
#define f first
#define s second

void init(int n)
{
	int i;
	for( i=0;i<n;i++)
	{
		parent[i]=i;
	}
}

int find(int i)
{
	while(parent[i]!=i)
	{
		i=parent[i];
	}
	return i;
}


void join(int x,int y)
{
	int p = find(x);
	int q = find(y);
	parent[p] = parent[q];
}



int kruskal(pair<int,pair<int,int> >p[],int node){
	
	int min_cost = 0;
	int i;
	for(i=0;i<node;i++)
	{
	    int x = p[i].s.f;
	    int y = p[i].s.s;
	    int w = p[i].f;
	    if(find(x)!=find(y))
	    {
	    	min_cost+=w;
	    	join(x,y);
		}
		
	
	}
	return min_cost;
	
	
}



int main()
{
	int nodes,edges;
	cin >> nodes >> edges;
	init(nodes);
	int i;
	for(i=0;i<edges;i++)
	{
		int x,y,w;
		cin >> x >> y >> w;
		pair<int,pair<int,int> >t;
		t.f = w;
		t.s.f = x;
		t.s.s = y;
		p[i] = t;
	}
	sort(p,p+edges);
	int cost = kruskal(p,nodes);
	cout<<cost<<"\n";
}
