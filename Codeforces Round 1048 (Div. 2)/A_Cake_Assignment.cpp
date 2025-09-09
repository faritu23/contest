
#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;

void solve()
{
    int k, x;
    cin >> k >> x;

    int n = pow(2, k + 1);
    int y = n - x;
    vector<int> v;
    while (x != n / 2 && y != n / 2)
    {
        cout<<x<<" "<<y<<endl;
        if (x < y)
        {
            y -= x;
            x *= 2;
            v.push_back(1);
        }
        else
        {
            x -= y;
            y *= 2;
            v.push_back(2);
        }
    }
    cout << v.size() << endl;
    for (int i = v.size() - 1; i >= 0; i--)
        cout << v[i] << " ";
    cout << endl;
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