/*



010
100
003

0100
1000
0000
0000









*/

#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   char a[n][n];
   for(int i=0;i<n;i++)
   {
        if(i%2==0)
        {
            for(int j=0;j<n;j++)
            {
                if(j%2==0)a[i][j]='W';
                else a[i][j]='B';
            }
        }
        else{
            for(int j=0;j<n;j++)
            {
                if(j%2==0)a[i][j]='B';
                else a[i][j]='W';
            }
        }
   }
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)cout<<a[i][j];
    cout<<endl;
   }
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // ll t=1;cin>>t;
    // while(t--)
    {
        solve();
    }
    return 0;
}