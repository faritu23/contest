
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   string s;cin>>s;
   int n=s.size();
   int one=0,zero=0;
   for(int i=0;i<n;i++)
   {
    if(s[i]=='0') zero++;
    else one++;
   }
   int cur=0;
   for(int i=0;i<n;i++)
   {
        if(s[i]=='0' && one)
        {
            one--;
            cur++;
        }
        else if(s[i]=='1' && zero)
        {
            zero--;
            cur++;
        }
        else break;
   }
   cout<<(n-cur)<<endl;

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