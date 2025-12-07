
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;

void solve()
{
   int n,k; cin>>n>>k;
   vector<int> v(n),p(n+1);
   int ans=0;
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   sort(v.begin(),v.end());
   for(int i=0;i<n;i++)
   {
        ans+=v[i];
        p[i+1]=ans;
   }
   
//    ans = max(ans, pr[n - (k - i)] - pr[2 * i])
   ans=0;
   for(int i=0;i<=k;i++)
   {
        int a=p[n-(k-i)];
        int b=p[2*i];
        ans=max(ans,a-b);
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
