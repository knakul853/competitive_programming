ll ext_eul(ll a,ll b,ll &x ,ll &y)
{
    if(b == 0)
    {
        x = 1,y = 0;
        return a;
    }
    ll x1,y1;
   ll temp =  ext_eul(b , a%b , x1 , y1 );
    y = x1 - (a / b) * y1;
    x = y1;
    return temp;
    

}

/// : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1045
/// : https://pastebin.com/WQbb9XZL
