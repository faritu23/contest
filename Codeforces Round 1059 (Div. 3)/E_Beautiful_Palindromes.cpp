/******* Smiling hurts more than breaking *******/
/********* Some bugs can never be fixed *********/
/*********** P47H4N - The Mind Hunter ***********/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define sp " "
#define br "\n"
#define vin(v) for(auto &x: v) cin >> x
#define vout(v) for(int i=0;i<v.size();i++) cout << v[i] << " "
#define all(v) v.begin(),v.end()
const ll MOD = 1e9+7, N = 2e5+7;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n), missing;
    set<ll> st;
    map<ll, ll> mp;
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        mp[v[i]]++;
        st.insert(v[i]);
    }
    for(int i=1;i<=n;i++)
    {
        if(mp.find(i)==mp.end()) missing.push_back(i);
    }
    if(missing.size()==1)
    {
        ll a = v.back();
        st.erase(a);
        bool ok = false;
        for(auto x: st)
        {
            missing.push_back(x);
            if(!ok)
            {
                missing.push_back(a);
                ok = true;
            }
        }
    }
    else if(missing.size()==0)
    {
        for(int i=0;i<n;i++) missing.push_back(v[i]);
    }
    else
    {
        for(auto x: st) missing.push_back(x);
    }
    for(int i=0;i<k;i++) cout << missing[i] << sp;
    cout << br;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll t=1; cin >> t;
    for(int i=1;i<=t;i++)
    {
        //cout << "Case " << i << ": ";
        solve();
    }
 return 0;
}