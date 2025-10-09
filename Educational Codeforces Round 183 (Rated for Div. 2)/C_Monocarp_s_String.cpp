#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int>v(n, 0);
    for(int i = 0; i < n; i++) {
        if(i > 0) v[i] = v[i-1];
        if(s[i] == 'a') v[i]++;
        else v[i]--;
    }
    if(v[n-1] == 0) {
        cout << "0\n";
        return;
    }
    map<int, int>lst;
    int ans = n;
    for(int i = n-1; i >= 0; i--) {
        int trgt = v[i]+v[n-1];
        if(lst.find(trgt) != lst.end()) {
            ans = min(ans, lst[trgt]-i);
        }
        lst[v[i]] = i;
    }
    int trgt = v[n-1];
    if(lst.find(trgt) != lst.end()) {
        ans = min(ans, lst[trgt]+1);
    }
    if(ans == n) cout << "-1\n";
    else cout << ans << "\n";
}
int32_t main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}