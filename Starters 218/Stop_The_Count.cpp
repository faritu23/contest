
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   string s; cin>>s;
   int a=0,b=0,cnt=0;
   for(int i=0;i<n;i++)
   {
        if(s[i]=='1')a++;
        else b++;

        if(a>b)cnt++;
   }
   cout<<cnt<<endl;
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