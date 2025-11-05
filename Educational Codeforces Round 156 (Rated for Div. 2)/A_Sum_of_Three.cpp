
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   int x=1,y=2,z=n-3;
   if(z<3)
   {
    cout<<"NO"<<endl;
        return;
   }

   if(z%3==0)
   {
        if(z-2<=y+2)
        {
            cout<<"NO"<<endl;return;
        }
        else{
            y+=2;
            z-=2;
        }
   }
   cout<<"YES"<<endl;
   cout<<x<<" "<<y<<" "<<z<<endl;
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