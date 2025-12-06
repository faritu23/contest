#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   vector<int> v(n);
   for(int i=0;i<n;i++) cin>>v[i];
   int ans=0;
   for(int i=0;i<n-1;i++)
   {
        int sum=v[i];
        for(int j=i+1;j<n;j++)
        {
            sum+=v[j];
            bool f=true;
            for(int k=i;k<=j;k++)
            {
                if(sum%v[k]==0)f=false;
            }
            if(f) ans++;
        }
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