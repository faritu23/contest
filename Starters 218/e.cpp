
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
bool much(int n)
{
    if(((n>>0)&1)==0  && ((n>>1)&1)==0 && ((n>>2)&1)==0) return true;
    else return false;
}
bool two_zero(int n)
{
    if(((n>>0)&1)==0  && ((n>>1)&1)==0) return true;
    else return false;
}
void solve()
{
   int n; cin>> n;
   
   while(n>1)
   {
       if(much(n)){
           n/=2;
        }
        else if(two_zero(n) && n!=4)
        {
            n^=3;
            n++;
        }
        else{
            if((n%2==0 && n/2==1)||(n^3)+1==1 || n==4|| n==6)
            {
                n=1;
            }
            else{
                cout<<"No"<<endl;return;
            }
        }
        // cout<<n<<endl;
        // return;
   }
   cout<<"Yes"<<endl;
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