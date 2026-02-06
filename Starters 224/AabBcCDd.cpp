
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int n; cin>>n;
    string s;cin>>s;
    map<char,int>mp;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            int a=s[i]-'A';
            char c=a+'a';
            s[i]=c;
        }
        mp[s[i]]++;
    }
    // cout<<s<<endl;
    for(auto [i,j]:mp)v.push_back(j);
    sort(v.rbegin(),v.rend());
    int cnt=0,ans=0;
    for(int i=0;i<v.size();i++){
        if(cnt==2)break;
        ans+=v[i];
        cnt++;
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