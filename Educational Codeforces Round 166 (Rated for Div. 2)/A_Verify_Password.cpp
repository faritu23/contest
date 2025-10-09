

#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   string s;cin>>s;
   vector<int> a,b,c,d;
   for(int i=0;i<n;i++)
   {
        if(s[i]>='a' && s[i]<='z')a.push_back(s[i]);
        else b.push_back(s[i]);
   }

   for(int i=1;i<n;i++)
   {
    if(s[i-1]>='a' && s[i-1]<='z' && s[i]>='0' && s[i]<='9'){
        cout<<"NO"<<endl;return;
    }
   }
   c=a,d=b;
   sort(c.begin(),c.end());
   sort(d.begin(),d.end());
   if(c==a && d==b)
   {
    cout<<"YES"<<endl;

   }
   else cout<<"NO"<<endl;
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