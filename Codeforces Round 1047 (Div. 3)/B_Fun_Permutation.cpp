
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    int m=n;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        int j=i+1;
        mp[j]=m;
        m--;
    }

    for(int i=0;i<n;i++)
    {
        cout<<mp[v[i]]<<" ";
    }
    cout<<endl;
   
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