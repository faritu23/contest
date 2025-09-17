
#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int n, mx = 0;
    cin >> n;
    vector<int> v(n), su(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = n - 1; i >= 0; i--)
    {
        mx = max(v[i], mx);
        su[i] = mx;
    }
    mx = v[0];
    for (int i = 1; i < n - 1; i++)
    {
        // cout<<v[i]<<" "<<su[i+1]<<" "<<mx<<endl;
        if (v[i] < min(mx, su[i + 1]))
        {
            cout << "NO" << endl;
            return;
        }
        mx = max(v[i], mx);
    }
    cout << "YES" << endl;
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