
#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    int even = 0, odd = 1;
    int ans = m;
    for (int i = 0; i < n; i++)
    {
        // cout<<even<<" "<<odd<<"-"<<v[i].first<<" "<<v[i].second<<endl;
        if (v[i].first % 2 == 0 && v[i].second != even)
        {
            ans--;
            swap(even, odd);
        }
        else if (v[i].first % 2 == 1 && v[i].second != odd)
        {
            ans--;
            swap(even, odd);
        }
    }
    cout << ans << endl;
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}