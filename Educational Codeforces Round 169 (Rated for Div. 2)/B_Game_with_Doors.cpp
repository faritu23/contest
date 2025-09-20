
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int x,y,X,Y;cin>>x>>y>>X>>Y;
   set<int>s1,s2;

   for(int i=x;i<=y;i++)s1.insert(i);
   for(int i=X;i<=Y;i++)
   {
        if(s1.find(i)!=s1.end())
        {
            s2.insert(i);
        }
   }
   int ans=s2.size()+1;

   if(x==X)ans--;
   if(Y==y)ans--;
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