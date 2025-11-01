
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   vector<int> v(n);
   for(int i=0;i<n;i++)cin>>v[i];

   sort(v.begin(),v.end());
   vector<int> ans;
   while(1)
   {
        set<int>s;
        for(int i=0;i<n;i++)s.insert(v[i]);

        if(s.size()==1)break;

        for(int i=0;i<n;i++)
        {
            v[i]+=v[0];
            v[i]/=2;
        }
        ans.push_back(v[0]);
   }
   cout<<ans.size()<<endl;
   if(ans.size()>n || ans.size()==0) return;
   for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";cout<<endl;
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