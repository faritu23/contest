
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int n,k; cin>>n>>k;
    string s; cin>>s;
    vector<int>v(n,0);
    int sum=0;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        if(s[i]=='0')sum++;
        else sum--;
        v[i]=sum;
        mp[sum]++;
    }
    for(int i=0;i<n;i++)cout<<v[i]<<" ";cout<<endl;
    if()
    int ans=0;
    for(int i=0;i<n;i++){

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