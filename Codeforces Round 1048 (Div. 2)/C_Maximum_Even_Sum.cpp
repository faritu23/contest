
#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    if ((b % 4 == 0) || (b % 2 == 0 && a % 2 == 0))
    {
        cout << ((b / 2) * a) + 2 << endl;
    }
    else if (b % 2 != 0 && a % 2 != 0)
    {
        cout << (b * a) + 1 << endl;
    }
    else if (a % 2 == 0 && b % 2 != 0)
        cout << -1 << endl;
    else
        cout << -1 << endl;
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