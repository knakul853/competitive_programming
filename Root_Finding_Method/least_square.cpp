
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
vector<pair<double,double>>points;
vector<pair<double,double>>ans;
#define f first
#define s second
int n;

void ok()
{
    cout<<"Enter the no. of points\n";
    cin >> n;
    double sx=0,sy=0,sxy=0,sx2=0;
    
    for(int i=0;i<n;i++)
    {
        double x,y;
        cin >> x >> y;
        points.pb({x,y});

        sx+=x;
        sy+=y;
        sx2+=x*x;
        sxy+=x*y;
    }
    // formula taken from wiki
    double slope = ( n * sxy - sx * sy )/ ( n * sx2 - sx * sx);
    double c = (sx2 *  sy - sx * sxy) / (n * sx2 - sx * sx);

    for(int i=0;i<n;i++)
    {
        double oldy = points[i].s;
        double oldx = points[i].f;
        double newy = slope *  oldx + c;
        ans.pb({oldy,newy});
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i].f<<" "<<ans[i].s<<"\n";
    }
    cout<<"y = "<<slope<<"x + "<<c<<"\n";

}


int main() {
    int t=1;
    //cin >> t;
    while(t--)
    {
        ok();
    }
}
