#include <bits/stdc++.h>
using namespace std;

class SegmentTree {
private:
    vector<long long> tree;
    vector<int> arr;
    int n;
    
    void build(int node, int start, int end) {
        if (start == end) {
            tree[node] = arr[start];
        } else {
            int mid = (start + end) / 2;
            build(2 * node, start, mid);
            build(2 * node + 1, mid + 1, end);
            tree[node] = tree[2 * node] + tree[2 * node + 1];
        }
    }
    
    void update(int node, int start, int end, int idx, int val) {
        if (start == end) {
            arr[idx] = val;
            tree[node] = val;
        } else {
            int mid = (start + end) / 2;
            if (idx <= mid) {
                update(2 * node, start, mid, idx, val);
            } else {
                update(2 * node + 1, mid + 1, end, idx, val);
            }
            tree[node] = tree[2 * node] + tree[2 * node + 1];
        }
    }
    
    long long query(int node, int start, int end, int l, int r) {
        if (r < start || end < l) {
            return 0;
        }
        if (l <= start && end <= r) {
            return tree[node];
        }
        int mid = (start + end) / 2;
        long long left_sum = query(2 * node, start, mid, l, r);
        long long right_sum = query(2 * node + 1, mid + 1, end, l, r);
        return left_sum + right_sum;
    }
    
public:
    SegmentTree(vector<int>& a) {
        arr = a;
        n = a.size();
        tree.resize(4 * n);
        build(1, 0, n - 1);
    }
    
    void update_index(int idx, int val) {
        update(1, 0, n - 1, idx, val);
    }
    
    long long range_sum(int l, int r) {
        return query(1, 0, n - 1, l, r);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, q;
    cin >> n >> q;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    SegmentTree seg_tree(a);
    
    for (int i = 0; i < q; i++) {
        int type;
        cin >> type;
        
        if (type == 1) {
            // Swap query
            int x;
            cin >> x;
            x--; // Convert to 0-indexed
            
            // Get current values
            int val1 = a[x];
            int val2 = a[x + 1];
            
            // Swap in original array
            swap(a[x], a[x + 1]);
            
            // Update segment tree
            seg_tree.update_index(x, val2);
            seg_tree.update_index(x + 1, val1);
        } else {
            // Sum query
            int l, r;
            cin >> l >> r;
            l--; r--; // Convert to 0-indexed
            
            long long result = seg_tree.range_sum(l, r);
            cout << result << "\n";
        }
    }
    
    return 0;
}