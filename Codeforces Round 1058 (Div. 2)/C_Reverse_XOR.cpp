

#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
string binary_convert(int n)
{
    string s;
    for(int i=0;i<=32;i++)
    {
        if((n>>i)&1)s.push_back('1');
        else s.push_back('0');
    }
    return s;
}

bool pal(string s)
{
    int n=s.size();
    
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])return false;
    }
    return true;
}

void solve()
{
   int n; cin>>n;
   string s=binary_convert(n);
   while(s.back()=='0')s.pop_back();
   int cnt=0;
   for(int i=0;i<s.size();i++)
   {
       if(s[i]=='1')
       cnt++;
    }
    if(cnt%2)
    {
        cout<<"NO"<<endl;return;
    }
    
    string s1=s;
    for(int i=0;i<30;i++)
    {
        if(pal(s1))
        {
            cout<<"YES"<<endl;return;
        }
        s1.push_back('0');
    }
    cout<<"NO"<<endl;

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