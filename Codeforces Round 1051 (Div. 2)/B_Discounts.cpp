
#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(b.begin(), b.end());
    sort(a.rbegin(), a.rend());
    int cur = 0;
    for (int i = 0; i < n; i++)
    {
        if (i >= m)
            break;
        cur += b[i];
        if (cur > n)
            break;
        sum -= a[cur - 1];
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