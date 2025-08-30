#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   map<pair<int,string>,int>mp;
   for(int i=1;i<=n;i++)
   {
    string s;cin>>s;
     mp[{i,s}]++;
   }
   int m; cin>>m;
   string s;cin>>s;
   if(mp[{m,s}])cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}