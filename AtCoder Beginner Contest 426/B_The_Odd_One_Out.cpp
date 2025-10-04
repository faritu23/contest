#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   string s;
   map<char,int> mp;
   cin>>s;
   for(int i=0;i<s.size();i++)
   {
        mp[s[i]]++;
   }

   for(auto [i,j]:mp)
   {
    if(j==1)
    {
        cout<<i<<endl;return;
    }
   }
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}