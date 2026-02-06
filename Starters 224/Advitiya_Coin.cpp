
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int n,k; cin>>n>>k;
    vector<int> v(n);
    set<int>s;
    for(int i=0;i<n;i++){
        cin>>v[i];
        s.insert(i);
    }
    sort(v.begin(),v.end());
    
    int l=0,r=0,ans=0;
    while(r<n)
    {
        if(s.find(l)!=s.end())
        {
            if(v[r]-v[l]-k>0){
                s.erase(l);
                s.erase(r);
                r++;
                l++;
                ans++;
            }
            else{
                r++;
            }

        }
        else{
            while(s.find(l)==s.end())
            {
                l++;
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