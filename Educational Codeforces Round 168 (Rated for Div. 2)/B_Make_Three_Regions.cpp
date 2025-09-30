
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n;cin>>n;
   char a[2][n];

   for(int i=0;i<2;i++)
   {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
   }

   int ans=0,k=0;
   bool f=false;
   /*
   
   .R.
   X.X
   
   */
   for(int i=0;i<n;i++)
   {
        if(a[0][i]=='.' && (i-1>=0 && a[1][i-1]=='.' && a[0][i-1]=='x') && (i+1<n && a[1][i+1]=='.' && a[0][i+1]=='x')&& a[1][i]=='.')
        {
           ans++;
        }
        else if(a[1][i]=='.' && (i-1>=0 && a[0][i-1]=='.' && a[1][i-1]=='x') && (i+1<n && a[0][i+1]=='.' && a[1][i+1]=='x') && a[0][i]=='.')
        {
            ans++;
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