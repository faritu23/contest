
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int n,k,b,s; cin>>n>>k>>b>>s;
    if(k*b>s){
        cout<<-1<<endl;return;
    }
    vector<int> v(n,0);
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            v[i]=b*k;
        }
        else{
            if(s>=k-1) v[i]=k-1;
            else v[i]=s;
        }
        s-=v[i];
    }
    if(s>=k){
        cout<<-1<<endl;return;
    }
    v[0]+=s;
    for(int i=0;i<n;i++)cout<<v[i]<<" ";cout<<endl;
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