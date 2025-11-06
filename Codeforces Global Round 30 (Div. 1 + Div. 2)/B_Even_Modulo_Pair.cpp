
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   vector<int> v(n);
   vector<int> even,odd;
   for(int i=0;i<n;i++)
   {
    cin>>v[i];
    if(v[i]%2==0)even.push_back(v[i]);
    else odd.push_back(v[i]);
   }

   if(even.size()>=2) {
    cout<<even[0]<<" "<<even[1]<<endl;return;
   }
   

   sort(v.begin(),v.end());
   for(int i=0;i<n-1;i++)
   {
        for(int j=i+1;j<n;j++)
        {
            if((v[j]%v[i])%2==0)
            {
                cout<<v[i]<<" "<<v[j]<<endl;return;
            }
        }
   }

   cout<<-1<<endl;

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