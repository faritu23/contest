
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   vector<int> v(n);
   int mx=0;
   for(int i=0;i<n;i++)
   {
        cin>>v[i];
        mx=max(v[i],mx);
   }
   
   
   int r=0,sum=0,f=0,ans=0,cur=1;
   while(r<n)
   {
        if(r==0)
        {
           ans+=v[r]-cur;
        }
        else{
            // cout<<r<<" "<<cur<<" "<<v[r]<<endl;
            if(cur<v[r]){
                ans+=v[r]-cur;
            }
        }

        cur=v[r];
        r++;
    }
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