
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n,k; cin>>n>>k;
   vector<int> v(n);
   for(int i=0;i<n;i++) cin>>v[i];
   sort(v.rbegin(),v.rend());

   int ans=0;
   int m=0;;

   if(k<n)
   {
       while(k)
       {
        ans+=(v[m]*k);
        k--;
        m++;
       }

   }
   else{
    int a=k-n;
    // cout<<a<<endl;
        while(k>a)
       {
        ans+=(v[m]*k);
        k--;
        m++;
       }
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