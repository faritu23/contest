#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
int n,m;
vector<pair<int,int>>p={{0,1},{1,0},{0,-1},{-1,0}};
bool vis[100][100];
bool valid(int i,int j)
{
    if(i<0 || j<0 || i>=n || j>=m)return false;
    return true;
}
int bfs(int si,int sj,vector<vector<int>>&grid)
{
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj]=true;

    int ans=4;
    while(!q.empty())
    {
        int pi=q.front().first;
        int pj=q.front().second;
        q.pop();
        for(auto i:p)
        {
            int ci=i.first+pi;
            int cj=i.second+pj;

            if(valid(ci,cj) && vis[ci][cj]==false && grid[ci][cj]==1)
            {
                vis[ci][cj]=true;
                q.push({ci,cj});
                ans+=2;
            }
        }
    }
    return ans;
}
void islandPerimeter(vector<vector<int>>& grid) {
    memset(vis,false,sizeof(vis));
    n=grid.size();
    m=grid[0].size();
    int si,sj;
    for(int i=0;i<n;i++)
    {
        bool f=false;
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]==1)
            {
                si=i,sj=j;
                f=true;
                break;
            }
        }
        if(f)break;
    }
    int ans=bfs(si,sj,grid);
    cout<<ans<<endl;
    // return ans;
}
void solve()
{
    
    vector<vector<int>> grid(n);
   cin>>n>>m;
   for(int i=0;i<n;i++)
   {
        for(int j=0;j<m;j++){
            int x; cin>>x;
            grid[i].push_back(x);
        }
   }
   for(int i=0;i<n;i++)
   {
        for(int j=0;j<m;j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
   }
//    islandPerimeter(grid);
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}