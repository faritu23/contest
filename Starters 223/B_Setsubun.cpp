
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
bool check(int n,int x,int mid)
{
    mid+=n;
    int a=(mid*(mid+1))/2  -  (n*(n+1))/2  ;
    a+=n;
    if(a>=x)return true;
    return false;
}
void solve()
{
   int n,x; cin>>n>>x;
   
   int l=0,r=5e8,mid;
   while(l<r)
   {
    mid=(l+r)/2;
    if(check(n,x,mid))
    {
        r=mid;
    }
    else{
        l=mid+1;
    }
   }
   cout<<r<<endl;
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // ll t=1;cin>>t;
    // while(t--)
    {
        solve();
    }
    return 0;
}