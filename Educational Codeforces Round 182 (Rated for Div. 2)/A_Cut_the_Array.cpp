
#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), pre(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        pre[i + 1] = (pre[i] + v[i]) % 3;
    }
    for (int l = 1; l < n; l++)
    {
        for (int r = l + 1; r < n; r++)
        {
            int a = pre[l] % 3;
            int b = (pre[r] - pre[l] + 3) % 3;
            int c = (pre[n] - pre[r] + 3) % 3;
            if ((a == b && b == c) || (a != b && b != c && a != c))
            {
                cout << l << " " << r << endl;
                return;
            }
        }
    }
    cout << 0 << " " << 0 << endl;
}

main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
