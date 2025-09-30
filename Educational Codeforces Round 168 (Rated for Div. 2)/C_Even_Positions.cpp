
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int n;cin>>n;
    string s ; cin>>s;
    int open=0,close=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')open++;
        if(s[i]==')')close++;
    }
    open=(n/2)-open;
    close=(n/2)-close;

    stack<pair<char,int>>sk;

    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(sk.size()==0){
            if(s[i]=='_' && open){
                sk.push({'(',i});
                open--;
            }
            else{
                sk.push({s[i],i});
            }
        }
        else{
            if(sk.top().first=='(' )
            {
                if(s[i]==')')
                {
                    ans+=i-sk.top().second;
                    sk.pop();
                }
                else if(s[i]=='_' && close)
                {
                    ans+=i-sk.top().second;
                    sk.pop();
                    close--;
                }
                else if(s[i]=='_')
                {
                    sk.push({'(',i});
                }
                else {
                    sk.push({s[i],i});
                }
            }
            else {
                if(s[i]=='_')
                {
                    sk.push({'(',i});
                    open--;
                }
                else{
                    sk.push({s[i],i});
                }
            }
        }
    }
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