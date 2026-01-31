
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
bool check(vector<int>v,vector<int>v1,int k,int n)
{
    for(int i=0;i<n;i++)
    {
        if(max(abs(v[i]-v1[0]),abs(v[i]-v1[n-1]))<k && v[i]!=v1[i])return false;
    }
    return true;

}
void solve()
{
    int n,a=-1,f=0; cin>>n;
    vector<int> v(n),v1;
    for(int i=0;i<n;i++)  cin>>v[i];
    v1=v;
    sort(v1.begin(),v1.end());
    
    if(v1==v)
    {
        cout<<-1<<endl;return;
    }
    int l=0,r=1e12,mid,ans=-1,i=0;
    while(l<r)
    {
        mid=(l+r+1)/2;
        if(check(v,v1,mid,n))
        {
            ans=mid;
            l=mid;
        }
        else
        r=mid-1;
    }
    
    cout<<ans<<endl;
   
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
/*



2 1 5 4 3
5 1 2 4 3
1 5 2 4 3
1 2 5 4 3

4 1 5 2 3
1 4 3 2 5
1 2 3 4 5

6
1 1 5 4 3 4 2 6
1 1 2 3 4 4 5 6

2 3 4 5 6


1 2 3
3 4
1 2 3 4
1 2 3 4
2 1 3


1 1 4 5 4 3


*/