
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n,x; cin>>n>>x;
   vector<int> v(n);
   for(int i=0;i<n;i++) cin>>v[i];
   sort(v.begin(),v.end());

   for(int i=1;i<n;i++)
   {
        if(v[i-1]<x && v[i]>x){
            cout<<"No"<<endl;return;
        }
        if(v[i-1]>x && v[i]<x){
            cout<<"No"<<endl;return;
        }

   }
   cout<<"Yes"<<endl;
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