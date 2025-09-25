/*

4 2
1 2 3 


*/
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int x,y;
   cin>>x>>y;
   if(x<y)cout<<2<<endl;
   else if(x==y)cout<<-1<<endl;
   else {
    int a=y-1;
    if(a>0)
    {
        int c=1+y;
        x--;
        if(c<=x)cout<<"3"<<endl;
        else cout<<-1<<endl;
    }
    else
    cout<<-1<<endl;
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