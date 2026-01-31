
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   vector<int> v;
   int ans=0;
   for(int i=0;i<n;i++){
    int x; cin>>x; v.push_back(x);
   }
   int mx=0,cnt=0,l=0,r=0;
   while(r<v.size()-1)
   {
        if(v[r]==v[r+1]-1 ){
            mx=max(r-l+1+1,mx);
        }
        else if(v[r]==1)mx=max(r-l+1,mx);
        else{
            l=r;
        }
        r++;
   }
   if(n==1 && v[0]==1)ans++;
   ans+=mx;
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