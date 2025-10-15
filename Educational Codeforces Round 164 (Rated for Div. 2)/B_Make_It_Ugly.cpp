
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
bool impossible(vector<int> v,int n)
{
    set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(v[i]);
    }
    if(s.size()==1)return true;
    else return false;
}
int check(vector<int> v,int n)
{
    vector<int>p;

    int cur=v[0],cnt=0;
    for(int i=0;i<n;i++)
    {
        if(cur==v[i]){
            cnt++;
            p.push_back(cnt);
        }
        else{
            cnt=1;
            cur=v[i];
            p.push_back(cnt);
        }
    }
    // for(int i=0;i<n;i++) cout<<p[i]<<" ";cout<<endl;
    int mn=INT_MAX;
    if(v[0]!=v[2] && v[0]!=v[1])mn=0;
    for(int i=0;i<n-2;i++)
    {
        int a=p[i];
        
        if(v[i]!=v[i+1] && v[i]==v[i+2])
        {
            mn=min(a,mn);
        }
        
    }
    if(mn==INT_MAX)mn=0;
    return mn;
}
void solve()
{
   int n; cin>>n;
   vector<int> v(n);
   for(int i=0;i<n;i++)cin>>v[i];

   if(impossible(v,n))cout<<-1<<endl;
   else{
        int a=check(v,n);
        reverse(v.begin(),v.end());
        int b=check(v,n);
        int mn=min(a,b);
        cout<<mn<<endl;
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