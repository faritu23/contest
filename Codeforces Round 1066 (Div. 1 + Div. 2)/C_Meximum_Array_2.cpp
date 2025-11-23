
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
int const N=1e9;
void check(int l,int r,vector<int> &ans,int &n,int &k)
{
    
    for(int i=l;i<=r;i++)
    {
        if(ans[i]!=-1)ans[i]++;
    }

    
}



void solve()
{
   int n,k,q;cin>>n>>k>>q;
   vector<pair<int,int>> v;

   vector<int> ans(n,-1);
   
   while(q--)
   {
        int x,l,r;cin>>x>>l>>r;
        l--;r--;

        if(x==2)v.push_back({l,r});
        else{
            for(int i=l;i<=r;i++)ans[i]=k;
        }
   }

   for(int i=0;i<v.size();i++)
   {
       int l=v[i].first;
       int r=v[i].second;
       check(l,r,ans,n,k);
    }

    int j=0;
    for(int i=0;i<n;i++)
    {
        j%=k;
        if(ans[i]==-1){
            ans[i]=j;
            j++;
        }
    }
    for(int i=0;i<n;i++)if(ans[i]==-1)ans[i]=k+10;
    for(int i=0;i<n;i++)cout<<ans[i]<<" ";cout<<endl;

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



