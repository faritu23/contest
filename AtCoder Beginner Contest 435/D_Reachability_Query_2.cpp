#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
const int N=1e6;
vector<int> v[N];
bool vis[N];
void dfs(int sur)
{
    vis[sur]=true;
    for(int child:v[sur])
    {
        if(vis[child]==false)dfs(child);
    }
}
void solve()
{
   int n,e; cin>>n>>e;
   memset(vis,false,sizeof(vis));
   while(e--)
   {
        int a,b; cin>>a>>b;
        v[b].push_back(a);
   }
   int q; cin>>q;
   while(q--)
   {
        int a,b; cin>>a>>b;
        if(a==1)
        {
            if(!vis[b]) dfs(b);
        }
        else{
            if(vis[b])cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
   }
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}