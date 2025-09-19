
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    string s1,s2; cin>>s1>>s2;
    int ans=s1.size()+s2.size();

    int n=s1.size(),m=s2.size();
    bool f=false;
    for(int i=0;i<min(m,n);i++)
    {
        if(s1[i]==s2[i] && f)
        {
            ans--;
        }
        else if(s1[i]!=s2[i])break;
        else f=true;
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