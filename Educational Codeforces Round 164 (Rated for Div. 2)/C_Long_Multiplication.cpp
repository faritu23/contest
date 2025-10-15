
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   string s1,s2; cin>>s1>>s2;
   int n=s1.size();
   int a=0;
   for(int i=0;i<n;i++)
   {
        int l=s1[i]-'0';
        int r=s2[i]-'0';
        if(r>l)
        {
            swap(s1[i],s2[i]);
        }
        if(max(l,r)!=min(l,r))
        {
            a=i+1;break;
        }
   }
   for(int i=a;i<n;i++)
   {
        int l=s1[i]-'0';
        int r=s2[i]-'0';
        if(l>r)
        {
            swap(s1[i],s2[i]);
        }
   }
   cout<<s1<<endl;
   cout<<s2<<endl;
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