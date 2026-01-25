
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   string s; cin>>s;
   int ans=0;
   for(int i=0;i<s.size();i++)
   {
        if(s[i]=='i' || s[i]=='j')ans++;
   }
   cout<<ans<<endl;
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // ll t=1;cin>>t;
    // while(t--)
    {
        solve();
    }
    return 0;
}