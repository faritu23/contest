
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   if(n%2){
    cout<<"NO"<<endl;return;
   }
   cout<<"YES"<<endl;
   string s;
   int a=0;
   for(int i=0;i<n;i+=2)
   {
        if(a)
        {
            s.push_back('A');
            s.push_back('A');
            a=0;
        }
        else{
            s.push_back('B');
            s.push_back('B');
            a=1;
        }
   }
   cout<<s<<endl;
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