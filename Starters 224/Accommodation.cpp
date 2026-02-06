/*



*/


#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
bool check(int g,int b,int x,int y,int n,int mid){
    g-=x*mid;
    b-=y*mid;
    if(g<0 || b<0)return true;
    
    int remain=n-x-y;
    int mix=g+b;
    
    int t=remain*mid;
    if(t>=mix)return true;
    return false;

}
bool check1(int g,int b,int x,int y,int n,int mid){
    g-=x*mid;
    b-=y*mid;
    if(g<0 || b<0)return false;
    
    int remain=n-x-y;
    int mix=g+b;
    
    int t=remain*mid;
    if(t>=mix)return true;
    return false;

}
void solve()
{
    int g,b,x,y,n; cin>>g>>b>>x>>y>>n;

    // if(x+y>n)
    // {
    //     cout<<-1<<endl;return;
    // }
    int l=0,r=1e9+5,mid,i=0;
    while(l<r)
    {
        mid=(l+r)/2;
        if(check(g,b,x,y,n,mid))
        {
            r=mid;
        }
        else l=mid+1;
    }

    // cout<<r<<endl;
    bool f=check1(g,b,x,y,n,r);
    if(f)cout<<r<<endl;
    else cout<<-1<<endl;

}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}