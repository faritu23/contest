#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int n,k; cin>>n>>k;
    vector<int> v(n);
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    int ans=0;
    for(auto &[x,y]:mp)
    {
        if(y>k)
        {
            ans++;
            mp[x+1]+=y-1;
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

/*
for(auto &x: mp)
    {
        if(x.first > l)
        {
            f = x.first;
            ll tmp = x.second - k;
            if(tmp > 0) l = x.first + tmp;
            else l = x.first;
        }
        else l += x.second;
        ans = max(ans, l - f);
    }


    i>cur
        f=i;
        ll tmp=j-k
        if(tmp > 0) l=i+tmp;
        else l=i;

    else
        l+=j;
        ans=max(ans,l-f)


*/