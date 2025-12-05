
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n,k; cin>>n>>k;
   string s;cin>>s;
   int ans=0,cnt=0;
   for(int i=0;i<n;i++)
   {
        if(s[i]=='1'){
            cnt=k;
        }
        else if(cnt)
        {
            cnt--;
        }
        else 
        ans++;
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
