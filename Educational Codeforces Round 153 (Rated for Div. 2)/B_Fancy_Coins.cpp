
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n,k,a,b;cin>>n>>k>>a>>b;

   int n_b=n/k;
   int add=0;
   if(b)
   {
        if(n_b>=b)add+=(k*b);
        else{
            add+=(k*n_b);
        }
   }

   if(a+add>=n)
   {
    cout<<0<<endl;return;
   }


   int ans1=LLONG_MAX,ans2=LLONG_MAX,ans3=LLONG_MAX;
   add+=a;
   ans1=(n-add)/k +((n-add)%k);
         
//    add-=k-((n-add)%k);

    if(add)
    {
        int x=k-(n-add)%k;
        if(k-x<=add && a>=k-x){
            int x1=n-(add-(k-x));
            ans2=(x1)/k +(x1)%k;

        }
        if(x<=add && a>=x)
        {
            int x1=n-(add-x);
            ans3=(x1)/k +(x1)%k;
        }
    }
    else{
        ans2=(n-add)/k +(n-add)%k;
    }

   cout<<min({ans1,ans2,ans3})<<endl;
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