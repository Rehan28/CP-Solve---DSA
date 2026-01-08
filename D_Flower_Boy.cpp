#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl "\n"

void Muku28() { ios_base::sync_with_stdio(false); cin.tie(NULL); }

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < m; ++i) cin >> b[i];

    vector<int> pre(n + 1, 0);
    int j = 0;
    for (int i = 0; i < n; ++i) {
        if (j < m && a[i] >= b[j]) {
            pre[i + 1] = pre[i] + 1;
            j++;
        } else {
            pre[i + 1] = pre[i];
        }
    }

    vector<int> suff(n + 2, 0);
    j = m - 1;
    for (int i = n - 1; i >= 0; --i) {
        if (j >= 0 && a[i] >= b[j]) {
            suff[i + 1] = suff[i + 2] + 1;
            j--;
        } else {
            suff[i + 1] = suff[i + 2];
        }
    }

    int ans = LLONG_MAX;

    for (int i = 0; i <= n; ++i) {
        if (pre[i] + suff[i + 1] >= m) {
            ans = 0;
            break;
        }
    }

    if (ans != 0) {
        for (int i = 0; i <= n; ++i) {
            if (pre[i] + suff[i + 1] + 1 >= m) {
                ans = min(ans, b[pre[i]]);
            }
        }
    }
    
    if (ans == LLONG_MAX) {
        cout << -1 << nl;
    } else {
        cout << ans << nl;
    }
}

int32_t main() {
    Muku28();
    int test;
    cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}
