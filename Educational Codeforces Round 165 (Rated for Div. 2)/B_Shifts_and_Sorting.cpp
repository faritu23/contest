
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   string s; cin>>s;
   int n=s.size();
   int one=-1,zero=-1,ans=0;
   for(int i=0;i<n;i++)
   {
        if(one==-1 && s[i]=='1')
        {
            one=i;
        }
        else if(one!=-1 && s[i]=='0')
        {
            int sz=i-one+1;
            ans+=sz;
            one++;
            zero=-1;
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