
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   string s; cin>>s;
   map<char,int> mp;
   for(int  i=0;i<s.size();i++) mp[s[i]]++;
    if(mp.size()>1)
    {
        int c=0,b=0;
        for(auto [i,j]:mp)
        {
            if(j%2==0)c++;
            else b=max(b,j);
        }
        if(c>1 || (c==1 && b>2))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
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