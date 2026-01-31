/*

9
9 9 8 2 4 4 3 5 3
5 4 3 2 3 4 3 4 3
2-4
3-7 ,9
4-5 ,6
5-8
9-1,2


4 5 5 0 1 1
0 1 1 1 1 


5 2 1 3 4
3 2 1 2 3



*/

#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   vector<int> v(n),v1;
   queue<pair<int,int>>q;
   vector<pair<int,int>>vv;
   for(int i=0;i<n;i++) {
    cin>>v[i];
    vv.push_back({v[i],i});
   }
   v1=v;
   sort(vv.begin(),vv.end());
   for(int i=0;i<n;i++) {
    q.push({vv[i].first,vv[i].second});
   }

   int ans=0;
   while(!q.empty())
   {
        pair<int,int>p=q.front();
        q.pop();
        int  val=p.first,i=p.second; 
        // cout<<val<<" "<<i<<endl;
        // if(v[i]<val)continue;
        if(i-1>=0 )
        {
            if(abs(v[i]-v[i-1])>1){
                int k=v[i-1];
               if(v[i-1]>v[i]){
                    v[i-1]=v[i]+1;
                    q.push({v[i-1],i-1});
                }
            }
        }
        if(i+1<n)
        {
            if(abs(v[i]-v[i+1])>1){
                if(v[i+1]>v[i]){
                    v[i+1]=v[i]+1;
                    q.push({v[i+1],i+1});
                }
            }
        }
   }
  
   for(int i=0;i<n;i++){
    ans+=v1[i]-v[i];
   }
//    for(int i=0;i<n;i++)cout<<v[i]<< " ";cout<<endl;
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