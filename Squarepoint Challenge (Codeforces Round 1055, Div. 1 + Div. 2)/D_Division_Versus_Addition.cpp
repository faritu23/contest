
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
int check(int n)
{
    int a=log2(n);
    int b=0;
    for(int i=0;i<=30;i++)
    {
        if((1<<i)&n)b++;
    }
    if(n==1 || b==1 ) return a;
    else return a+1;
}
bool check1(int n)
{
    int a=0;
    for(int i=0;i<=30;i++)
    {
        if((1<<i)&n)a++;
    }
    if(a==2 && n%2==1) return true;
    return false;
}
void solve()
{
    int n,q,sum=0; cin>>n>>q;

    vector<int> v(n+1),riskval(n+1,0),make_incr(n+1,0),pre_incr(n+1,0),pre_erase(n+1,0);
    for(int i=1;i<=n;i++) {
        cin>>v[i];
        make_incr[i]=check(v[i]);
        sum+=make_incr[i];
        pre_incr[i]=sum;
    }
    sum=0;
    for(int i=1;i<=n;i++)
    {
        if(check1(v[i]))sum++;
        pre_erase[i]=sum;
    }

   
    while(q--)
    {
        int l,r; cin>>l>>r;
        int ans=pre_incr[r]-pre_incr[l-1];
        ans-=(pre_erase[r]-pre_erase[l-1]+1)/2;
        cout<<ans<<endl;
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