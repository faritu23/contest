/*


*/


#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
bool pal(string s)
{
    int n=s.size();
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])return false;
    }
    return false;
}
bool sort_s(string s1,string s)
{
    sort(s1.begin(),s1.end());
    if(s1==s)return true;
    else false;
}
void solve()
{
   int n; cin>>n;
   string s,s1; cin>>s;
   s1=s;

    vector<int> v;
   
   for(int i=0;i<n;i++)
   {
    if(s[i]=='1')v.push_back(i+1);
   }
   cout<<v.size()<<endl;
   for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
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