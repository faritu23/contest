
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n,m; cin>>n>>m;
   vector<int> v(n+1);
   v[0]=0;
   for(int i=1;i<=n;i++)
   {
        cin>>v[i];
   }
   v.push_back(m);
   int mx=0;
   for(int i=0;i<v.size()-1;i++)
   {
        mx=max(v[i+1]-v[i],mx);
        if(i==n)
        {
            mx=max((2*(m-v[i])),mx);
        }
   }
   cout<<mx<<endl;
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