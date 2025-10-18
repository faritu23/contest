
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
  int n; cin>>n;
  int mx=INT_MIN;
  for(int i=0;i<n;i++)
  {
    int x; cin>>x;
    mx=max(x,mx);
  } 
  cout<<mx<<endl;
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