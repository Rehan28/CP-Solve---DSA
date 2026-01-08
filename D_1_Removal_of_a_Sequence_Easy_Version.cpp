#include <bits/stdc++.h>
using namespace std;

#define int long long

// binary search to solve p - p/y = k
long long inverse_step(long long k, long long y) {
    if (y == 1) return -1;  // all removed

    long long lo = k;
    long long hi = (k * y) / (y - 1) + 5; // safe upper bound

    while (lo < hi) {
        long long mid = (lo + hi) >> 1;

        long long removed = mid / y;
        long long remain  = mid - removed;

        if (remain >= k) hi = mid;
        else lo = mid + 1;
    }
    return lo;
}

void solve() {
    long long x, y, k;
    cin >> x >> y >> k;

    if (y == 1) {
        cout << -1 << "\n";
        return;
    }

    long long cur = k;

    for (int i = 0; i < x; i++) {
        cur = inverse_step(cur, y);
    }

    cout << cur << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
