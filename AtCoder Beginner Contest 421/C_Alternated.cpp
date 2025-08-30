#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> A, B;
    for (int i = 0; i < n * 2; i++)
    {
        if (s[i] == 'A')
            A.push_back(i);
        else
            B.push_back(i);
    }

    int sum1 = 0, sum2 = 0, j = n - 1;
    
    for (int i = (n * 2) - 1; i > 0; i -= 2)
    {
        sum1 += abs(i - A[j]);
        j--;
    }
    j = A.size() - 1;
    for (int i = (n * 2) - 2; i >= 0; i -= 2)
    {
        sum2 += abs(i - A[j]);
        j--;
    }
    cout << min(sum2, sum1) << endl;
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}