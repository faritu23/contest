#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    int cur = 0, people = 0;
    for (int l = 0; l < n; l++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (people + c > k && mp.size())
        {
            vector<int> v;
            for (auto [i, j] : mp)
            {
                people -= j;
                cur = max(i, cur);
                v.push_back(i);
                if (people + c <= k)
                    break;
            }
            for (int i = 0; i < v.size(); i++)
                mp.erase(v[i]);
        }

        cur = max(cur, a);
        if (mp.find(cur + b) != mp.end())
            mp[cur + b] += c;
        else
            mp[cur + b] = c;
        people += c;

        cout << cur << endl;
    }
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}