
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
int l1(string s,int n,int m)
{
    int cnt=0;
    bool f=false;
    for(int i=1;i<n;i++)  if(s[i]=='I')s[i]=s[i-1];

    
    for(int i=1;i<=n;i++)
    {
         if(i==n ){
             if(s[i%n]==s[i-1]) f=true;
             continue;
         }
         if(s[i]==s[i-1]) cnt++;
    }
    int ans=(m*cnt);
    if(f)ans+=m-1;

    return ans;
}
void solve()
{
   int n,m,cnt=0; cin>>n>>m;
   string s;cin>>s;
   bool f=false;

   string s1=s;
   reverse(s1.begin(),s1.end());

   for(int i=0;i<n;i++)
   {
       if(s1[i]=='I')s1.push_back('I');
       else
       break;
   }
   reverse(s1.begin(),s1.end());
   while(s1.size()>n)s1.pop_back();


   for(int i=0;i<n;i++)
   {
        if(s[i]=='I')s.push_back('I');
        else
        break;
   }

   reverse(s.begin(),s.end());
   while(s.size()>n)s.pop_back();
   reverse(s.begin(),s.end());



   int ans=max(l1(s,n,m),l1(s1,n,m));
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