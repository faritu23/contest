#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
const int N=1e9+7;
const int M=1e5+18;
int store[M];
void make()
{
    int mu=1;
    store[0]=0;
    for(int i=1;i<1e5+18;i++)
    {
        mu*=2;
        mu%=N;
        store[i]=mu;
    }
}
void solve()
{
    int t;cin>>t;
    vector<int> a(t),b(t);
    for(int  i=0;i<t;i++) cin>>a[i];
    for(int  i=0;i<t;i++) cin>>b[i];


    for(int i=0;i<t;i++) cout<<store[b[i]]<<endl;
    
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    make();
    solve();
    return 0;
}