
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int n; cin>>n;
   string s; cin>>s;
   int ans=0;
   int cur=0;
   
   for(int i=0;i<n;i++)
   {
        if(i==0 && s[i]=='0' && i+1<n && s[i+1]=='0')s[i+1]='1';
        else if(i==0 && s[i]=='0' && i+1==n )s[i]='1';
        else if(i==n-1 && i-1>=0 && s[i-1]=='0' && s[i]=='0')s[i]='1';
        if(s[i]=='0')
        {
            cur++;
            if(cur==3)
            {
                s[i]='1';
                cur=0;
                ans++;
            }
        }
        else{
            ans++;cur=0;
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