#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   vector<int> v(n);
   for(int i=0;i<n;i++) cin>>v[i];
   int ans=0,cur=0;
   
   for(int i=0;i<n;i++)
   {
        if(v[i]>cur){
            cur=v[i];
        }
        ans++;
        cur--;
        if(cur==0)break;
   }
   cout<<ans<<endl;
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}