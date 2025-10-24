
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
map<int,int> s;
void check(int m)
{
    vector<pair<int,int>> v;
    for(auto [i,j]:s) v.push_back({i,j});
    reverse(v.begin(),v.end());
    
    int l=m;
    for(int i=0;i<v.size();i++)
    {
        int a=l/(v[i].first);
        if(a>=v[i].second)
        {
            l-=v[i].second*v[i].first;
        }
        else{
            l-=v[i].first*(a);
        }
    }

    if(l==0)cout<<"YES"<<endl;
    else   cout<<"NO"<<endl;
}
void solve()
{
   int q;cin>>q;
   while(q--)
   {
        int a,b;
        cin>>a>>b;
        if(a==1)
        {
            s[pow(2,b)]++;
        }
        else {
            check(b);
        }
   }
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    {
        solve();
    }
    return 0;
}