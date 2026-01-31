
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
bool check(int coder,int math,int nosp,int mid)
{
    int a=min(coder,math);
    int ex=(coder+math+nosp)/mid;
    if(a>=mid && ex>=3)return true;
    return false;
}
void solve()
{
   int coder,math,nosp;cin>>coder>>math>>nosp;
   int l=0,r=1e8 +5,mid;
   while(l<r)
   {
        mid=(l+r+1)/2;
        if(check(coder,math,nosp,mid))
        {
            l=mid;
        }
        else r=mid-1;
   }
   cout<<l<<endl;
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