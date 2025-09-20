
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n,k; cin>>n>>k;
   vector<int> v(n);
   int a=0,b=0,mn;
   for(int i=0;i<n;i++){
    cin>>v[i];
   }

   sort(v.rbegin(),v.rend());
   for(int i=0;i<n;i++)
   {
        if(i%2==0)
        {
            a+=v[i];
        }
        else{
            int l=v[i-1]-v[i];
            if(k && l<=k)
            {
                k-=l;
                b+=l;
            }
            else if(k && l>k)
            {
                b+=k;
                k=0;
            }
            b+=v[i];
        }
   }

   mn=abs(a-b);
   cout<<mn<<endl;
   
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