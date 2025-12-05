#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int  n; cin>>n;
   vector<int> v(n);
   for(int i=0;i<n;i++) cin>>v[i];
   int q=n;
   while(q--)
   {
        int x; cin>>x;
        cout<<v[x-1]<<" ";
        v.erase(v.begin()+x-1);
   }
   cout<<endl;
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}