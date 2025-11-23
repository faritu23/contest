
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   vector<int> v(n);
   map<int,int> mp;
   for(int i=0;i<n;i++)
   {
        cin>>v[i];
        mp[v[i]]++;
   }
   int ans=0;
   for(auto [i,j]:mp)
   {
        if(i>j)ans+=j;
        else if(i<j) ans+=j-i;
   }
   cout<<ans<<endl;
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