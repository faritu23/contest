#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   vector<int> v(n);
   vector<int> ans;
   ans.push_back(1);
   for(int i=0;i<n;i++) cin>>v[i];

   int x=1;
   for(int i=1;i<n;i++)
   {
        int a=abs(v[i]-v[i-1]);
        if(a==1){
            int b=ans.back();
            ans.push_back(b);
        }
        else if(a==i+1)
        {
            ans.push_back(x+1);
            x++;
        }
        else{
            int c=ans[i-a];
            ans.push_back(c);
        }
   }
   for(int i=0;i<n;i++) cout<<ans[i]<<" "; cout<<endl;
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