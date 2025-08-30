#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n,x;cin>>n>>x;
   vector<int> a(n),b(n);
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
    }
    vector<pair<int,int>>v;
    set<int> s;
   for(int i=0;i<n;i++)
   {
        cin>>b[i];
        if(b[i]>=0 && a[i]>=0){
            s.insert(b[i]+a[i]);
        }
        else{
            v.push_back({a[i],b[i]});
        }
   }

   sort(v.begin(),v.end());
   int sz=v.size();
   if(s.size()>1){
    cout<<0<<endl;
   }
   else if(s.size()==1)
   {
       if(v.size()==0){
           cout<<1<<endl;return;
       }
        int nee=0;
        for(auto i:s)nee=i;

        if(v[sz-1].first>nee || v[0].first+x<nee){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
        
        
    }
    else if(s.size()==0){
        if(v[sz-1].first-v[0].first>x || v[0].first+x<v[sz-1].first){
            cout<<0<<endl;return;
        }
        int need=v[sz-1].first-v[0].first;
        int ans=x-need+1;
        cout<<ans<<endl;

   }
   else cout<<0<<endl;
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