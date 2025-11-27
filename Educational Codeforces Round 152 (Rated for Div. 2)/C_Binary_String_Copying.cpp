
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n,m; cin>>n>>m;
   vector<int> one(n,-1),zero(n,-1);
   string s; cin>>s;
   for(int i=0;i<n;i++)
   {
        if(s[i]=='1')one[i]=i;
        else zero[i]=i;
   }

   /*
   1 0 0 1 1 1
   -1 2 3 3 3 3
   1 1 1 4 5 6
   
   */
   for(int i=1;i<n;i++)
   {
        zero[i]=max(zero[i],zero[i-1]);
   }
   int mx=-1;
   for(int i=n-1;i>=0;i--)
   {
        if(one[i]==-1)
        {
            one[i]=mx;
        }
        else{
            mx=i;
        }
   }

   set<pair<int,int>>st;
   int ans=0;
   for(int t=0;t<m;t++)
   {
        int l,r;cin>>l>>r;
        l--;r--;
        int a=one[l],b=zero[r];
        if(a<b && a>=0 && b>=0)
        {
            st.insert({a,b});
        }
        else ans=1;
   }

   ans+=st.size();
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