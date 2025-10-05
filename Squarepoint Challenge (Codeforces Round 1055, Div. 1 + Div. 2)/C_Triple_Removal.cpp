
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n,q,sum=0; cin>>n>>q;
   vector<int> v(n+1),pre(n+1,0),pr(n+1,0),preOne(n+1,0);
   for(int i=1;i<=n;i++)
   {
        cin>>v[i];
   }
   for(int i=1;i<n;i++)
   {
        if(v[i]==v[i+1])pr[i]=1;
   }
   for(int i=1;i<=n;i++)
   {
        pre[i]=pre[i-1]+pr[i];
        preOne[i]=preOne[i-1]+v[i];
   }

//    for(int i=1;i<=n;i++) cout<<pre[i]<<" ";cout<<endl;
   


   while(q--)
   {
        int l,r,ans=0; cin>>l>>r;

        int ak=preOne[r]-preOne[l-1];
        int sunno=(r-l+1)-ak;
        if(ak%3 || sunno%3){
            cout<<-1<<endl;
        }
        else{

            ans=(ak/3)+(sunno/3);
            if(pre[r-1]==pre[l]){
                ans++;
            }
            cout<<ans<<endl;
        }

   }
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