
#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int n, cost = 0, cost1 = 0, ix;
    cin >> n;
    map<int, int> m;
    vector<int> v(n), ans, v1;
    int l = 1e9, r = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]]++;
        if (v[i] == 0)
        {
            cost++;
            ix = i;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (m.find(i) == m.end())
            ans.push_back(i);
    }

    if (cost == 1)
        v[ix] = ans[0];

    for (int i = 0; i < n; i++)
    {
        if (v[i] != i + 1)
        {
            l = min(l, i + 1);
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] != i + 1)
        {
            r = max(r, i + 1);
        }
    }
    if (r != -1 && l != 1e9)
        cout << r - l + 1 << endl;
    else
        cout << 0 << endl;
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
