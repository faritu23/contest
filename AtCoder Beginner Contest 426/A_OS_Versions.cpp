#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   string a="Ocelot",b="Serval",c="Lynx";

   string x,y; cin>>x>>y;
   
   if(x==y) cout<<"Yes"<<endl;
   else if((x==b && y==a) || ( x==c && y==b) || (x==c && y==a) ) cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}