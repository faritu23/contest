
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int x,n; cin>>x>>n;
   int a=0,b=0;
   for(int i=x;i<=n;i++)
   {
    if(i%1==0)
    {
        if(i%2)a+=i;
        else b+=i;
    }
   }
   if(b>a)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

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