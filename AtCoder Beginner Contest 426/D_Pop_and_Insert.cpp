
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;


void solve()
{
   int n; cin>>n;
   string s; cin>>s;
   
   int zero=0,one=0;
   int mx_z=0,mx_o=0;
   
   for(int i=0;i<n;i++)
   {
    if(s[i]=='1')
    {
        mx_z=max(mx_z,zero);
        zero=0;
    }
    else {
        zero++;
        mx_z=max(mx_z,zero);
    }
   }
   
   for(int i=0;i<n;i++)
   {
    if(s[i]=='0')
    {
        mx_o=max(mx_o,one);
        one=0;
   }
   else {
       one++;
       mx_o=max(mx_o,one);
   }
   }


   int cnt_one=0,cnt_zero=0;
   for(int i=0;i<n;i++)
   {
        if(s[i]=='0')cnt_zero++;
        else cnt_one++;
   }

   one=((cnt_one-mx_o)*2)+cnt_zero;
   zero=((cnt_zero-mx_z)*2)+cnt_one;
   cout<<min(one,zero)<<endl;
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