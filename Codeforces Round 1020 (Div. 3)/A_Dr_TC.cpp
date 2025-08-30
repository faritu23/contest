#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   string s;cin>>s;
   int k=0;
   for(int i=0;i<n;i++)
   {
    string s1=s;
    if(s1[i]=='0')s1[i]='1';
    else s1[i]='0';
    for(int j=0;j<n;j++)
    {
        if(s1[j]=='1')k++;
    }
   }
   cout<<k<<endl;
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