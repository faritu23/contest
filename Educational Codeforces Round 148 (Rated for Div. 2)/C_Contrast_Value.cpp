
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   vector<int> v(n);
   for(int i=0;i<n;i++) cin>>v[i];

   int inc=0,dre=0;
   
   vector<int> ans;
   for(int i=0;i<n;i++)
   {
        if(i==0) ans.push_back(v[i]);
        else {
            if(v[i]>=ans.back())
            {
                if(i+1<n && v[i+1]>=v[i])continue;
                else if(v[i]==ans.back())continue;
                else {
                    ans.push_back(v[i]);
                }
            }
            else{
                if(i+1<n && v[i+1]<=v[i])continue;
                else if(v[i]==ans.back())continue;
                else{
                    ans.push_back(v[i]);
                }
            }
        }
   }
   cout<<ans.size()<<endl;
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