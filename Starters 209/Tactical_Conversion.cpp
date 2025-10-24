
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    int cnt=0;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            v.push_back(i+1);
        }
    }
    if(v.size()>=4 ||v.size()<=1)
    cout<<"Yes"<<endl;
    else{
        if(v.size()==2 && abs(v[0]-v[1])>1)
        {
            cout<<"Yes"<<endl;
        }
        else if(v.size()==3 &&(v[1]-v[0]>1 || v[2]-v[1]>1))
        {
            cout<<"Yes"<<endl;
        }
        else
        cout<<"No"<<endl;
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