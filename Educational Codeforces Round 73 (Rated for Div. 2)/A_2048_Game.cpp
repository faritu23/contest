
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int n,sum=0; cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        if(x<=2048){
            v.push_back(x);
            sum+=x;
        }
    }
    if(sum>=2048)cout<<"YES"<<endl;
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