
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n,m,k; cin>>n>>m>>k;

   vector<int> v;
   int cnt=1;
   map<int,int> mp;
   for(int i=0;i<n;i++)
   {
        if(cnt>m)cnt=1;
        v.push_back(cnt);
        mp[cnt]++;
        cnt++;
   }
   int a=0;
   for(auto [i,j]:mp)
   {
        if(i!=1)a+=j;
   }
   if(a>k)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
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