
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
const long long N=2e5+5;
long long a[N];
long long tree[3*N];
void build(int u,int i,int j)
{
    if(i==j) {
        tree[u]=a[i];
        return;
    }
    int mid=(i+j)/2;
    build(u*2,i,mid);
    build((u*2)+1,mid+1,j);

    tree[u]=tree[u*2]+tree[(u*2)+1];
    // tree[u]=tree[u*2]*tree[(u*2)+1];
    // tree[u]=tree[u*2]|tree[(u*2)+1];
    // tree[u]=tree[u*2]&tree[(u*2)+1];
    // tree[u]=tree[u*2]^tree[(u*2)+1];

}
void update(int u,int i,int j,int idx,int x)
{
    if(i==j)
    {
        tree[u]=x;
        a[i]=x;
        return;
    }

    int mid=(i+j)/2;

    if(idx<=mid) update(u*2,i,mid,idx,x);// left
    else update((u*2)+1,mid+1,j,idx,x); //right

    tree[u]=tree[u*2]+tree[(u*2)+1];
}
int query(int u,int i,int j,int b,int e)
{
    if(i>e || j<b) return 0; //overflow

    if(i>=b && j<=e) //in full under
    {
        return tree[u];
    }

    int mid=(i+j)/2;

    int right=query(u*2,i,mid,b,e);
    int left=query((u*2)+1,mid+1,j,b,e);
    return right+left;
}
void solve()
{
   int n,q;
   cin>>n>>q;
   for(int i=1;i<=n;i++) cin>>a[i];

   build(1,1,n);

   while(q--)
   {
        int ai; cin>>ai;
        if(ai==1)
        {
            int x1; cin>>x1;
            int c=a[x1];
            int d=a[x1+1];
            update(1,1,n,x1, d);
            update(1,1,n,x1+1,c);
        }
        else{
            int x,y; cin>>x>>y;
            int ans=query(1,1,n,x,y);
            cout<<ans<<endl;
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
