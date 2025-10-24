
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   map<int,int>mp;
   vector<int> v;
   for(int i=1;i<=n;i++)
   {
        v.push_back(i);
        int a=__gcd(i,n);
      
        mp[i]=a;
   }
  
   for(int i=0;i<n;i++)
   {
        int a=mp[v[i]];
        for(int j=i-1;j>=0;j--)
        {
            if(a>mp[v[j]])swap(v[j+1],v[j]);
        }
   }
   for(int i=0;i<n;i++) cout<<v[i]<<" ";
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