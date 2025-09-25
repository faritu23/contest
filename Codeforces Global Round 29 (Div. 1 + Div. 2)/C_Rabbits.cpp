
#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
bool check(string s, int n)
{
    int coin = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 && s[i] == '0')
            coin = 1;
        if (s[i] == '0')
        {
            if (i == n - 1)
                return true;
            if ((i > 0 && s[i - 1] == '0') || (i + 1 < n && s[i + 1] == '0'))
            {
                coin++;
            }
            if (i + 2 < n && s[i + 1] == '1' && s[i + 2] == '0')
            {
                i += 2;
            }
            else if (coin)
            {
                coin--;
            }
            else
            {
                return false;
            }
        }
        else
        {

            if ((i + 1 < n && s[i + 1] == '1') || (i - 1 >= 0 && s[i - 1] == '1'))
                coin = 0;
        }
    }

    return true;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (check(s, n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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