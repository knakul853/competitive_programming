#include <bits/stdc++.h>
using namespace std;
vector<float>v;
vector<float>ans;
int n;
void bucket_sort()
{
    vector<float>bucket[n];
    for(int i=0;i<n;i++)
    {
        int id = n * v[i];
        bucket[id].push_back(v[i]);
    }
    for(int i=0;i<n;i++)
    {
        sort(bucket[i].begin(),bucket[i].end());
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<bucket[i].size();j++){
            ans.push_back(bucket[i][j]);
        }
    }
}

int main() {
  
  cin >> n;
  for(int i=0;i<n;i++)
  {
      float a;
      cin >> a;
      v.push_back(a);

  }
     
     bucket_sort();
     for(int i=0;i<n;i++)
     {
         cout<<ans[i]<<" ";
     }
}
