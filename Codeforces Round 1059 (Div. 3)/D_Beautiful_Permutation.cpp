
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
int check(int arr,int l,int r)
{
    cout<<arr<<" "<<l<<" "<<r<<endl;
    cout.flush();
    int sum; cin>>sum;
    return sum;
}
void solve()
{
   int n; cin>>n;
   int l=1,r=n,mid;
   while(l<r)
   {
        mid=(r+l)/2;
        if(check(1,l,mid)==check(2,l,mid))
        {
            l=mid+1;
        } 
        else{
            r=mid;
        }
   }

   l=r;
   r=check(2,1,n)-check(1,1,n);
   r=l+r-1;
   cout<<"! "<<l<<" "<<r<<endl;
   cout.flush();

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