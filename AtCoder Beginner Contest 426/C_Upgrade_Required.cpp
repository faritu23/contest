#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n,m; cin>>n>>m;
   map<int,int>mp;
   for(int i=1;i<=n;i++)mp[i]++;

   while(m--)
   {
        int l,x,ans=0;cin>>l>>x;

        vector<int> v;
        for(auto [i,j]:mp)
        {
            if(i>l)break;
            mp[x]+=j;
            ans+=j;
            v.push_back(i);
        }
        for(int i=0;i<v.size();i++)mp.erase(v[i]);
        cout<<ans<<endl;
   }
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}