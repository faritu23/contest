#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int n,x;
    cin>>n>>x;

    if(x==n){

        for(int i=0;i<n;i++)cout<<i<<" ";cout<<endl;
    }
    else{

        for(int i=0;i<n;i++)
        {
         if(i!=x)cout<<i<<" ";
        }
        
        cout<<x<<endl;
    }

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