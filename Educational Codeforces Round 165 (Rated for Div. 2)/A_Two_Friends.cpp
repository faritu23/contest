
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   vector<int> v(n);
   map<pair<int,int>,int>mp;
   for(int i=0;i<n;i++)
   {
    cin>>v[i];
    if(i+1>=v[i])
    {
        mp[{v[i],i+1}]++;
    }
    else {
        mp[{i+1,v[i]}]++;
    }
   }

   for(auto [i,j]:mp)
   {
        if(j>1){
            cout<<2<<endl;
            return;
        }
   }
   cout<<3<<endl;
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