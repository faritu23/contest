
#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n == 1)
        cout << 1 << " " << 1 << endl;
    else if (n == 2)
        cout << 1 << " " << 2 << " " << 1 << " " << 2 << endl;
    else
    {
        vector<int> v(n*2, 0);
        int k = n, a = 2;

        if (k % 2)
            k--;
        for (int i = 0; i < n*2; i++)
        {
            v[i] = k;
            v[i + k] = k;
            k -= 2;
            if (k <= 0)
                break;
        }
        if (n % 2)
        {
            k = n;
            for (int i = 0; i < n*2; i++)
            {
                if (v[i] == 0 && i+k<n*2 &&v[i+k]==0 )
                {
                    v[i] = k;
                    v[i + k] = k;
                    k -= 2;
                }
            }

            for (int i = 0; i < n*2; i++)
            {
                if (v[i] == 0)
                    v[i] = 1;
            }
        }
        else
        {
            k = n - 1;
            for (int i = 0; i < n*2; i++)
            {
                if (v[i] == 0  && i+k<n*2 &&v[i+k]==0 )
                {
                    v[i] = k;
                    v[i + k] = k;
                    k -= 2;
                }
            }

            for (int i = 0; i < n*2; i++)
            {
                if (v[i] == 0)
                    v[i] = 1;
            }
        }

        for (int i = 0; i < n*2; i++)
            cout << v[i] << " ";
        cout << endl;
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