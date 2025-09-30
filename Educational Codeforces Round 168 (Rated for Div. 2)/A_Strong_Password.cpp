
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   string s; cin>>s;
   int n=s.size();
   map<char,int>mp;
   char c;
   for(int i=0;i<n;i++) mp[s[i]]++;
   for(int i=0;i<26;i++)
   {
        char cc=i+'a';
        if(mp.find(cc)==mp.end())c=cc;
   }

   if(s.size()==1 )
   {
    cout<<s<<c<<endl;
   }
   else{
    cout<<s[0];
    bool f=true;
    for(int i=1;i<n;i++)
    {
        if(s[i-1]==s[i] && f)
        {
            cout<<c;
            f=false;
        }
        cout<<s[i];
    }
    if(f)cout<<c<<endl;
    else cout<<endl;
   }
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