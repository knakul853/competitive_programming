    #include<bits/stdc++.h>
    using namespace std;
    const int N = 1e7+9;
    int n;
    int bit[N];
     
    void update(int *bit ,int id,int val)
    {
         while(id<=n)
         {
             bit[id]+=val;
             id+= id&-id;
         }
     
    }
    int query(int *bit,int id)
    {
        int sum=0;
        while(id>0)
        {
         sum+=bit[id];
         id-=id&-id;
     
        }
        return sum;
    }
    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int t;
        cin>>t;
        while(t--){
        cin>>n;
        for(int i=0;i<n+7;i++)
            bit[i] = 0;
        int a[n],temp[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            temp[i] = a[i];
        }
        sort(temp,temp+n);
        for(int i=0;i<n;i++)
        {
            a[i] = lower_bound(temp,temp+n,a[i])-temp+1;
        }
        long long ct=0;
        for(int i = n-1;i>=0;i--)
        {
     
            ct+=query(bit,a[i]-1);
            update(bit,a[i],1);
        }
        cout<<ct<<endl;
        ct=0;
        }
     
    }
     
