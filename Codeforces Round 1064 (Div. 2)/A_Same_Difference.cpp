
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   string s;
   cin>>s;
   map<char,int> mp;
   for(int i=0;i<n;i++) mp[s[i]]++;
   cout<<n-mp[s[n-1]]<<endl;
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