
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int n,l,r,cnt_4=0;
    cin>>n>>l>>r;
    l=abs(l);r=abs(r);
    // l++;r++;
    int a=max(l,r),b=min(l,r);
    string s; cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='4')cnt_4++;
    }
    int cnt_8=n-cnt_4;

    

    bool f=true;
    if(a>n)f=false;

    
    int mn=min(cnt_8,b);
    int x=a+b-mn;
    if(x>n)f=false;

    // cout<<y<<" "<<b<<"->";

    if(f) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    

    // cout<<y<<" "<<x<<endl;
    // cout<<a<<" "<<b<<endl;




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

