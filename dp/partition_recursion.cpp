#include<bits/stdc++.h>
using namespace std;
bool solve(int a[],int sum,int n)
{
    if(sum==0)return true;
    if(n<0 || sum<0)return false;
    bool include = solve(a,sum-a[n],n-1);
    bool exclude = solve(a,sum,n-1);
    return include||exclude;

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int sum=accumulate(a,a+n,0);
    bool ans =  !(sum&1)?solve(a,sum/2, n-1):0;
    cout<<ans<<endl;



}

