
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   set<int> s;
   vector<int> v(n);
   for(int i=0;i<n;i++)
   {
        cin>>v[i];
        s.insert(v[i]);
   }

   sort(v.begin(),v.end());
   if(s.size()==1 || (s.size()==2 && abs(v[0]-v[n-1])>1)) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
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