
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   map<int,vector<int>>mp;
   vector<int> v(n);
   for(int i=0;i<n;i++)
   {
        cin>>v[i];
        mp[v[i]].push_back(i);
   }
   vector<int> ans(n);
   int cur=1;
   map<int,int> mp1;
   for(auto [i,j]:mp)
   {
        vector<int> vv=j;
        int s=vv.size();
        if(s%i){
            cout<<-1<<endl;return;
        }
        for(int k=0;k<s;k++)
        {
            ans[vv[k]]=cur;
            mp1[cur]++;
            if( mp1[cur]==i)cur++;
        }
        cur++;
   }

   for(int i=0;i<n;i++)cout<<ans[i]<<" ";cout<<endl;
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