
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n,m;
   cin>>n>>m;
   string s; cin>>s;
   int one_1=0,zero_0=0,two_2=0,two=0;
   for(int i=0;i<m;i++)
   {
        if(s[i]=='1')one_1++;
        else if(s[i]=='2') two_2++;
        else zero_0++;
   }

   if(m==n)
   {
        for(int i=0;i<n;i++) cout<<"-";cout<<endl;
        return;
   }
   vector<char> v(n,'+');
    for(int i=0;i<n;i++)
    {
        if(v[i]=='+' && zero_0)
        {
            v[i]='-';
            zero_0--;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(v[i]=='+' && one_1)
        {
            v[i]='-';
            one_1--;
        }
    }

    two=two_2;
    for(int i=0;i<n;i++)
    {
        if(v[i]=='+' && two_2)
        {
            v[i]='?';
            two_2--;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(v[i]=='+' && two)
        {
            v[i]='?';
            two--;
        }
    }

    for(int i=0;i<n;i++) cout<<v[i];cout<<endl;
   
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