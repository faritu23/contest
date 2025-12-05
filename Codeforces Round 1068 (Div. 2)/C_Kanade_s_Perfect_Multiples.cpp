
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n,k; cin>>n>>k;
   vector<int> v(n),ans;
   set<int> s,s1,ss;
   for(int i=0;i<n;i++){
    cin>>v[i];
    s.insert(v[i]);
   }
   sort(v.begin(),v.end());
   for(int i=0;i<n;i++)
   {
        // if(v[i]==1)
        // {
        //     cout<<1<<endl<<1<<endl;return;
        // }

        if(s1.find(v[i])==s1.end())
        {
            ss.insert(v[i]);
            for(int j=1;j*v[i]<=k;j++)
            {
                
                if(s.find(v[i]*j)!=s.end() || s1.find(v[i]*j)!=s1.end())
                {
                    s1.insert(v[i]*j);
                }
                else{
                    cout<<-1<<endl;return;
                }
            }
        }
        
   }
   cout<<ss.size()<<endl;
   for(auto i:ss)cout<<i<<" ";cout<<endl;
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