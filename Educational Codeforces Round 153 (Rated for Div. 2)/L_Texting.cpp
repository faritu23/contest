#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   
    string s;
    getline(cin,s);
    // cout<<s<<endl;
    map<char,int>mp;
    int n=s.size();

    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    int a=0,cur=1,ans=0;
    vector<int> v;
    for(auto [i,j]:mp)v.push_back(j);
    sort(v.rbegin(),v.rend());
    for(int i:v)
    {
        a++;
        // cout<<a<<" "<<cur<<" "<<i<<endl;
        ans+=i*cur;
        if(a==9)
        {
            a=0;
            cur++;
        }
    }
    cout<<ans<<endl;
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}