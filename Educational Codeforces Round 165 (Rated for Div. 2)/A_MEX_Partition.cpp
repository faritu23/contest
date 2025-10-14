
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   set<int> s;
   for(int i=0;i<n;i++)
   {
    int x; cin>>x;
    s.insert(x);
   }
   int a=0;
   for(auto i:s)
   {
        if(i==a)a++;
        else break;
   }
   cout<<a<<endl;
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