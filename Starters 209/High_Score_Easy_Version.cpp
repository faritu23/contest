
#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int n, m,sum=0;
    cin >> n >> m;

    map<int, int> mp, mp1;
    vector<int> v1(n), v2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
        mp[-v1[i]]++;
        sum+=v1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
        mp1[-v2[i]]++;
        sum+=v2[i];
    }

    int ans = 0;
    vector<int> v;
    for (auto [i, j] : mp)
    {
        int a=j;
        int b=mp1[i];
        if(a>n-b)
        {
            int ex=-((a-(n-b))*(i)*2);
            sum-=ex;
        }
    }
    cout << sum << endl;
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