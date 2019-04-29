#include <math.h>
#include <stdio.h>
#define db double
int g[100][100];
int cost[100][100];
int dist[1000];
int visit[1000];
int pre[10000];
int start;
int n;
#define inf 1000000
void dfs(int start)
{
    dist[start] = 0;
    visit[start] = 1;
    int cnt = 1;

    while(cnt < n-1)
    {
        int mindist = inf;
        int next;
        for(int i=0;i<n;i++)
        {
            if(!visit[i] && mindist > dist[i]){
                mindist = dist[i];
                next = i;
            }
        }
        visit[next] = 1;

        for(int i=0;i<n;i++)
        {
            if(!visit[i]){
                if(mindist + g[next][i] < dist[i])
                {
                     dist[i] =  mindist + g[next][i];
                     pre[i] = next;
                }
            }
        }
        cnt++;
    }

    for(int i=0;i<n;i++){
        printf("%d ",dist[i]);
    }
    
}




int main() {
  
    
      scanf("%d",&n);
      printf("Enter starting node\n");
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<n;j++)
          {
              scanf("%d",&g[i][j]);
              if(!g[i][j]){
                  g[i][j]= inf;
              }
          }
      }
   for(int i=0;i<n;i++)
   {
       dist[i] = g[start][i];
       pre[i] = start;
   }
   scanf("%d", &start);
   dfs(start);


}
