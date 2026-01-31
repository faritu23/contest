#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n,t; cin>>n>>t;
   vector<int> v(n+1,0);
   for(int i=1;i<=n;i++)cin>>v[i];
   v.push_back(t);
   int cur=0,ans=0;
   for(int i=0;i<=n+1;i++)
   {
     if(cur<v[i]){
        ans+=v[i]-cur;
        cur=v[i]+100;
     }
     else continue;
    
   }
   cout<<ans<<endl;
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}


/*

open-0 - close=100,
0 cur=100;
v[i]<cur close=0,open =-1;


*/