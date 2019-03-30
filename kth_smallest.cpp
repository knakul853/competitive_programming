#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int randompartition(int a[],int l,int r)
{
    int id = l+rand()%(r-l+1);
    swap(a[id],a[r]);
    int pivot = a[r];
    int i=l;
    for(int j = l; j<=r-1;j++)
    {
        if(a[j] <= pivot){
            swap(a[j],a[i]);
            i++;
        }
    }
    swap(a[i],a[r]);
    return i;
}

int kth(int a[],int l,int r,int k)
{
     if(k>0 && k<=r-l+1)
     {
       int   pos = randompartition(a,l,r);
       if(pos-l == k-1)return a[pos];
       if(pos-l > k-1)return kth(a,l,pos-1,k);
       return kth(a,pos+1,r,k-pos+l-1);

     }
     return INT_MAX;
}


void solve()
{
    int n;cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;
   int ans =  kth(a,0,n-1,k);
   cout<<ans<<"\n";
    
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    solve();
}
