

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
const int mx = 1000580;
string s;
struct node{
  int ans,pre,suf;
    node(){
        ans=0;pre=0;suf=0;
    }
};
typedef node node;
node seg[mx*4];
node comb(const node &l,const node &r){
    node temp;
    temp.ans = l.ans + r.ans + (min(l.pre,r.suf)<<1);
    temp.pre = l.pre + r.pre - min(l.pre,r.suf);
    temp.suf = l.suf + r.suf - min(l.pre, r.suf);
    return temp;
}
void build(int l,int r,int pos)
{
    if(l == r){
        if(s[l]=='('){
            seg[pos].pre = 1;
        }
        else{
            seg[pos].suf = 1;
        }
    }
    else{
    int mid = (l+r)>>1;
    int le = 2*pos;
    int ri = 2*pos+1;
    build(l,mid,le);
    build(mid+1,r,ri);
     seg[pos] = comb(seg[le],seg[ri]);
    }
}

node query(int l,int r,int ql,int qr,int pos)
{
    if(ql>r || qr <l)return node();
    if(ql<=l && qr>=r){
        return seg[pos];
    }
    int mid =  (l+r)>>1;
    int lc = pos + pos;
    int rc = lc | 1;
    return comb(query(l,mid,ql,qr,lc),query(mid+1,r,ql,qr,rc));
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
        cin>>s;
        int n = s.length();
        s=" " +s;
        build(1,n,1);
    int q;
    cin>>q;while(q--)
    {int x,y;cin>>x>>y;
     cout<<query(1,n,x,y,1).ans<<"\n";
    }

    
}
