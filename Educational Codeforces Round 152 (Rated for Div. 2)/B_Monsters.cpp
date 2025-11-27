#include<bits/stdc++.h>
using namespace std;
//#define int long long;


void solve()
{

    long long n,k; cin>>n>>k;
    vector<long long> v(n);
    map<long long ,vector<long long>>mp;
    bool f=false;
    for(int i=0;i<n;i++) 
    {
        cin>>v[i];
        v[i]%=k;
        if(v[i]==0)f=true;
        if(v[i]>0)
        mp[k-v[i]].push_back(i+1);
        else cout<<i+1<<" ";
    }
    
   
    for(auto [i,j]:mp)
    {
        vector<long long >vv=j;
        for(int l=0;l<vv.size();l++)cout<<vv[l]<<" ";
    }
    cout<<endl;
    
    
}
main()
{
    int t; cin>>t;
    while(t--)solve();
}