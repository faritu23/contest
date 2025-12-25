
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n,ans=0;cin>>n;
   vector<int> a(n),b(n);
   map<int,int>mp;
   for(int i=0;i<n;i++)
   {
        cin>>a[i];
   }
   for(int i=0;i<n;i++)
   {
    cin>>b[i];
    mp[b[i]]++;
   }
  

   for(int i=n-1;i>=0;i--)
   {
        auto it=mp.begin();
        int k=it->first;
        // cout<<a[i]<<" "<<k<<" "<<b[i]<<endl;

        mp[b[i]]--;
        if(mp[b[i]]==0)mp.erase(b[i]);
        ans+=(a[i]*k);
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