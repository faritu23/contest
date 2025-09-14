#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int a = n, b = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
            b = i;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            a = i;
            break;
        }
    }
    int ans = 0;
    //    cout<<a<<" "<<b<<endl;
    for (int i = a + 1; i <= b; i++)
    {
        ans++;
    }
    cout << ans << endl;
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}