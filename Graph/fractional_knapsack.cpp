#include <math.h>
#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
struct item{
    int val,wt;
};

bool cmp(item a,item b){

    double r1 = (double )a.val/a.wt;
    double r2 = (double)b.val / b.wt;
    return r1 > r2;

}

int main() {
  
    int w,n;
    cin >> n >> w;
    item a[n];
     for (int i = 0; i < n; i++) 
     {
          cin >> a[i].wt >>a[i].val;
          
    }
    sort(a,a+n,cmp);

    int wtt=0;
    double value=0;
    for(int i=0;i<n;i++)
    {
        if(a[i].wt+wtt <=w){
            wtt+=a[i].wt;
            value+=a[i].val;
        }
        else{
            int remain = w - wtt;
            value+=(double)a[i].val * (double)remain/a[i].wt;
            break;
        }
    }
     cout<<value<<"\n";
}
