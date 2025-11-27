
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n,k; cin>>n>>k;
   string s;cin>>s;
   k--;
   int ans1=0,ans2=0,cnt=1,j=k;
   for(int  i=k;i<n+k;i++)
   {
        int a=s[i%n]-'0';
        if(cnt%2)
        {
            ans1+=a;
        }
        else ans1-=a;
   }
   cnt=1;
   for(int  i=0;i<n;i++)
   {
        int a=s[j%n]-'0';
        if(cnt%2)
        {
            ans2+=a;
        }
        else ans2-=a;
        j++;
   }
   cout<<max(ans1,ans2)<<endl;
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