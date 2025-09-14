#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
int front(vector<int> v, int n, int m)
{
    bool f = true;
    int a, ans = 0;
    for (int i = m - 1; i >= 0; i--)
    {
        if (v[i] == 0)
        {
            f = false;
            a = i;
        }
    }
    if (f)
    {
        if (v[m] == 0)
            ans = 1;
        return ans;
    }
    for (int i = a; i <= m; i++)
    {
        if (v[i] == 1)
            ans++;
        ans++;
    }
    return ans;
}
int back(vector<int> v, int n, int m)
{
    bool f = true;
    int a, ans = 0;
    for (int i = m + 1; i < n; i++)
    {
        if (v[i] == 0)
        {
            a = i;
            f = false;
        }
    }
    if (f)
        return ans;
    for (int i = m + 1; i <= a; i++)
    {
        if (v[i] == 1)
            ans++;
        ans++;
    }
    return ans;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    m--;

    int ans = front(v, n, m) + back(v, n, m);
    cout << ans << endl;
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}