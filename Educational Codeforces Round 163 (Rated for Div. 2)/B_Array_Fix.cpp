
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   vector<int> v(n);
   for(int i=0;i<n;i++) cin>>v[i];
   reverse(v.begin(),v.end());
   int cur=v[0];
   for(int i=0;i<n;i++)
   {
        if(cur>=v[i]){
            cur=v[i];
            continue;
        }
    
        int a=v[i]%10;
        int b=v[i]/10;
        if(cur>=a && a>=b && b>0){
            cur=b;
        }
        else {
            cout<<"NO"<<endl;return;
        }
   }
   cout<<"YES"<<endl;
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