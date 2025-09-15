
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n,k; cin>>n>>k;
   vector<int> v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   sort(v.rbegin(),v.rend());

   int ans=INT_MAX,sum=0;
   for(int i=0;i<n;i++)
   {
        sum+=v[i];
        if(sum<=k)
        {
            ans=min(ans,k-sum);
        }
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