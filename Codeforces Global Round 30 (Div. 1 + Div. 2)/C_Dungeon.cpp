
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n,m,ans=0; cin>>n>>m;
   vector<int> a(n),b(m),c(m);
   vector<pair<int,int>>p,p1;
   for(int i=0;i<n;i++) cin>>a[i];
   for(int i=0;i<m;i++) cin>>b[i];
   for(int i=0;i<m;i++) cin>>c[i];

   priority_queue<int, vector<int>, greater<int>> pq,pq1;
   int mn=*min_element(b.begin(),b.end());
   for(int i=0;i<n;i++)
   {
        if(a[i]>=mn) pq.push(a[i]);
   }
   for(int i=0;i<m;i++) {
        if(c[i]!=0) p.push_back({b[i],c[i]});
        else p1.push_back({b[i],c[i]});
   }
   sort(p.rbegin(),p.rend());
   sort(p1.rbegin(),p1.rend());
   
   while(!pq.empty() && p.size())
   {
        int pow=pq.top();
        int val=p.back().first,y=p.back().second;
        int mx=max(pow,y);
        if(val<=pow){
            p.pop_back();
            pq.push(mx);
            ans++;
        }
        else{
            pq1.push(pow);
        }
        pq.pop();
    }
    while (!pq1.empty())
    {
            pq.push(pq1.top());
            pq1.pop();
    }

    while(!pq.empty() && p1.size())
   {
    
        int pow=pq.top();
        int val=p1.back().first,y=p1.back().second;
        int mx=max(pow,y);
        if(val<=pow){
            p1.pop_back();
            ans++;
        }
        pq.pop();
    }

   cout<<ans<<endl;
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



