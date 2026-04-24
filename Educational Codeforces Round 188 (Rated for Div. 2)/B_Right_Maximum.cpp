
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v(n);
    map<int ,vector<int>>mp;
    map<int,int> k;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]].push_back(i);
        k[v[i]]++;
    }
    int cur=n;
    while(k.size()){
        int mx=(k.rbegin())->first;
        int idx=mp[mx].back();
        // cout<<mx<<" "<<idx<<endl;

        for(int i=idx;i<cur;i++){
            k[v[i]]--;
            if(k[v[i]]==0){
                k.erase(v[i]);
                mp.erase(v[i]);
            }
            else mp[v[i]].pop_back();

        }
        ans++;
        cur=idx;
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