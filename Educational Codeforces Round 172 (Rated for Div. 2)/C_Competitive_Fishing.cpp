/*

001110
122223
001233




*/
#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int n, k, o = 0, z = 0, sum = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    //presum
    vector<int> v(n, 0), zero(n), one(n);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            z++;
        else
            o++;
        zero[i] = z;
        one[i] = o;
    }

    for (int i = 0; i < n; i++)
        v[i] = (one[n - 1] - one[i]) - (zero[n - 1] - zero[i]);
    sort(v.rbegin(), v.rend());

    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (sum >= k)
        {
            cout << i + 2 << endl;
            return;
        }
    }
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
