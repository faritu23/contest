
#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> odd, even;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2)
            odd.push_back(x);
        else
        {
            sum += x;
            even.push_back(x);
        }
    }
    if (odd.size() == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        sort(odd.rbegin(), odd.rend());
        int o = 0;
        for (int i = 0; i < (odd.size() + 1) / 2; i++)
            o += odd[i];
        cout << o + sum << endl;
    }
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