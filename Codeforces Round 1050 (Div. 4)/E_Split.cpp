
#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    for (auto [i, j] : mp)
    {
        if (j % m)
        {
            cout << 0 << endl;
            return;
        }
    }

    int sum = 0, l = 0, r = 0;
    map<int, int> p;
    while (r < n)
    {
        p[v[r]]++;
        if (p.find(v[r]) != p.end() && p[v[r]] > (mp[v[r]] / m))
        {
            while (p.find(v[r]) != p.end() && p[v[r]] > (mp[v[r]] / m))
            {
                p[v[l]]--;
                if (p[v[l]] == 0)
                    p.erase(v[l]);
                l++;
            }
        }
        sum += r - l + 1;
        r++;
    }
    cout << sum << endl;
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