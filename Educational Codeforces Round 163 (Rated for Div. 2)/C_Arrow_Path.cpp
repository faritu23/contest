
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
const int N=2e5+5;
char a[2][N];
bool vis[2][N];
vector<pair<int,int>> p={{0,1},{1,0},{-1,0},{0,-1}};
bool valid(int i,int j,int n)
{
    if(i>=2 || j>=n || i<0 || j<0)return false;
    return true;
}
bool dfs(int si,int sj,int n)
{
    cout<<si<<"-"<<sj<<endl;
    if(si==1 && sj==n-1) return true;
    if(a[si][sj]=='>')sj++;
    else sj--;
    cout<<si<<" "<<sj<<endl;
    if(vis[si][sj]) return false;
    vis[si][sj]=true;
    if(si==1 && sj==n-1) return true;
    bool ans=false;
    for(int i=0;i<4;i++)
    {
        int ci=si+p[i].first;
        int cj=sj+p[i].second;
        if(valid(ci,cj,n)){
            ans=(ans|dfs(ci,cj,n));
            if(ans)return true;
        }

    }
    return ans;
}
void solve()
{
   memset(vis,false,sizeof(vis));
   int n; cin>>n;
   for(int i=0;i<2;i++)
   {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
   }
   
   if(dfs(1,0,n)|| dfs(0,1,n))cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
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