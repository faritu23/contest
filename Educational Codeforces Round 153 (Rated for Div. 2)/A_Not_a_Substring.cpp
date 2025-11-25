
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   string s;
   cin>>s;
   int n=s.size();
   string s1="()";
   if(s==s1 ){
    cout<<"NO"<<endl;return;
   }

   for(int i=0;i<n;i++)
   {
        if(s[i]==s[i+1])
        {
            cout<<"YES"<<endl;
            for(int j=0;j<n*2;j+=2)cout<<"()";cout<<endl;
            return;
        }
        
   }
   for(int i=0;i<n;i++)
   {
        if(s[i]!=s[i+1])
        {
            cout<<"YES"<<endl;
            for(int j=0;j<n;j++)cout<<"(";
            for(int j=0;j<n;j++)cout<<")";cout<<endl;
            return;
        }
        
   }

   cout<<"NO"<<endl;
   
   
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