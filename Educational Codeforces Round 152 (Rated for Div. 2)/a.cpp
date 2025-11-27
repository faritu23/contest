#include<bits/stdc++.h>
using namespace std;
//#define int long long;

void solve()
{

    int a,b,c;
    cin>>a>>b>>c;
    b+=c;
    int ans=0;
    if(a>b)
    {
        ans=b*2 + 1;
    }
    else{
        ans= a+(a-1);
    }
    cout<<ans<<endl;
}
main()
{
    int t; cin>>t;
    while(t--)solve();
}