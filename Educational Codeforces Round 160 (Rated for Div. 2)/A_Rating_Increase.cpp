
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   string s;
   cin>>s;
   string s1;
   reverse(s.begin(),s.end());
   s1.push_back(s.back());
   s.pop_back();
   while(s.back()=='0'){
       s1.push_back(s.back());
       s.pop_back();
    }
    reverse(s.begin(),s.end());

    int a=0,b=0;
    for(int i=0;i<s.size();i++)
    {
        a*=10;
        a+=s[i]-'0';
    }
    for(int i=0;i<s1.size();i++)
    {
        b*=10;
        b+=s1[i]-'0';
    }
    if(a>b) cout<<b<<" "<<a<<endl;
    else cout<<-1<<endl;
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