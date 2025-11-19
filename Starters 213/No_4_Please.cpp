
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
        if(i==2)
        {
            ans+=j-1;
            continue;
        }
        int a=4-i;
        int b=mp[a];
        ans+=min(j,b);
        mp[i]=0;
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