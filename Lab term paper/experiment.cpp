#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n + 1), b(m + 1), prefix_sum(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        prefix_sum[i] = prefix_sum[i - 1] + a[i];
    }
    for (int i = 1; i <= m; i++) cin >> b[i];

    int q;
    cin >> q;
    while (q--) {
        int type, l, r, x, v;
        cin >> type;
        if (type == 1) {
            cin >> x >> v;
            a[x] = v;
            for (int i = x; i <= n; i++) {
                prefix_sum[i] = prefix_sum[i - 1] + a[i];
            }
        } else {
            cin >> l >> r;
            bool equal = true;
            for (int i = 1; i <= m; i++) {
                if (prefix_sum[l + i - 1] - prefix_sum[l + i - 2] != b[i]) {
                    equal = false;
                    break;
                }
            }
            if (equal) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
