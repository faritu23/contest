/*

1 2 3
1 2
4
1 2 4 
2 3 1 4
1 2 3

3 4 2 5 1
3 4 2 5 1 6



*/

#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   vector<int> v;
   int m=n;
   for(int i=1;i<=n/2;i++)
   {
        v.push_back(m);
        v.push_back(i);
        m--;

   }
   if(n%2)v.push_back((n+1)/2);
   reverse(v.begin(),v.end());
   for(int i=0;i<n;i++)cout<<v[i]<<" ";cout<<endl;
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