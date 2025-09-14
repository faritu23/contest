#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    if (n < 1000 + k)
    {
        cout << 0 << endl;
        return;
    }

    int ans = 0;
    for (int i = 0;; i++)
    {
        n -= 1000 + k;
        if (n < 0)
            break;
        ans++;
    }
    cout << ans * 1000 << endl;
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}