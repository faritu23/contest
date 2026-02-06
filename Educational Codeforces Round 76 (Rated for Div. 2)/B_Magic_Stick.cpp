/*

2 3
2-1
1

3-1
4-6

*/


#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int a,b; cin>>a>>b;
    if(a>=b || (a<b && a>=4 )||(a==2 && b==3))cout<<"YES"<<endl;
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