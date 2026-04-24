/*
6 20 15 1000
6 15 20 






*/
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
int lcm(int a,int b)
{
    return ((a/__gcd(a,b))*b);
}
void solve()
{
    int a,b,c,t; cin>>a>>b>>c>>t;
    int x=(t/a),y=(t/b),z=(t/c);
    int ans1=0,ans2=0,ans3=0;
    //first
    int x1=(lcm(a,b));
    int x2=(lcm(a,c));
    int x3=(lcm(b,c));
    int to1=(lcm(x1,x2)),to=lcm(to1,x3);

    // cout<<x<<" "<<y<<" "<<z<<" "<<to<<endl;

    
    //1
    int i1=t/x1,i2=t/x2,i3=t/to;
    int a1=x-(i1+i2-i3);
    ans1+=(a1*6) + (i1-i3+i2-i3)*3 +(i3*2);
    
    //2
    i1=t/x1;i2=t/x3;
    int b1=y-(i1+i2-i3);
    ans2+=(b1*6) +(i1-i3+i2-i3)*3 + (i3*2);

    //3
    i1=t/x2;i2=t/x3;
    int c1=z-(i1+i2-i3);
    ans3+=(c1*6) +(i1-i3+i2-i3)*3 + (i3*2);

    cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;

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