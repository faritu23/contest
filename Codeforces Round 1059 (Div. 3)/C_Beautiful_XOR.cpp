
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int a,b; cin>>a>>b;
   int x=log2(a),y=log2(b);

   if(x<y){
    cout<<-1<<endl;return;
   }
   if(a==b)
   {
        cout<<0<<endl;return;
   }
   
   int x1=a^a;
   int y1=b;
   cout<<2<<endl;
   cout<<x1<<" "<<y1<<endl;
   

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