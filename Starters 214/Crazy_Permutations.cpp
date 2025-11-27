
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   vector<int> a(n),b(n);
   for(int i=0;i<n;i++) cin>>a[i];
   for(int i=0;i<n;i++) cin>>b[i];

   for(int i=0;i<n-1;i++)
   {
        if((a[i]<a[i+1] && b[i]>b[i+1]) || (a[i]>a[i+1] && b[i]<b[i+1]))
        {
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