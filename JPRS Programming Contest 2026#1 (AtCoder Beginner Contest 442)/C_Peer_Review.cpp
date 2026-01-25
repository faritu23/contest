#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n,m;
   cin>>n>>m;
   vector<int> v(n+1,0);
   for(int i=0;i<m;i++){
    int a,b; cin>>a>>b;
    v[a]++;
    v[b]++;
   }

   int sum=0;
   for(int i=1;i<=n;i++)
   {
    int a=v[i];
    int x=n-1-v[i];
    int ans=(x-1)*(x-2)*(x)/6;
    cout<<ans<<" ";
   }
   cout<<endl;
//    cout<<sum<<endl;
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}