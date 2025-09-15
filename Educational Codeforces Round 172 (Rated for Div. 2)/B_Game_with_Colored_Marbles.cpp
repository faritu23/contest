
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   vector<int> v(n);
   map<int,int> mp;
   int ans=0;
   for(int i=0;i<n;i++)
   {
    cin>>v[i];
    mp[v[i]]++;
   }
   map<int,int> p;
   for(auto [i,j]:mp)
   {
        p[j]++;
   }
   for(auto [i,j]:p)
   {
    //    cout<<i<<" "<<j<<endl;
        if(i==1)
        {
            int a=(j+1)/2;
            ans+=a*2;
        }
        else
        ans+=j;
        // cout<<ans<<endl;
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