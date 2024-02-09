#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    vector<int> increasing(n, 1);
    vector<int> decreasing(n, 1);

    // Calculate longest non-decreasing subsequences
    for (int i = 1; i < n; ++i) {
        if (b[i] >= b[i - 1]) {
            increasing[i] = increasing[i - 1] + 1;
        }
    }

    // Calculate longest non-increasing subsequences
    for (int i = 1; i < n; ++i) {
        if (b[i] <= b[i - 1]) {
            decreasing[i] = decreasing[i - 1] + 1;
        }
    }

    int changes = n;
    int idx = -1;

    // Find the index that gives the maximum length for the monotone subsequence
    for (int i = k - 1; i < n; ++i) {
        int len = max(increasing[i], decreasing[i]);
        if (len >= k) {
            int cur_changes = i - len + 2;
            if (cur_changes < changes) {
                changes = cur_changes;
                idx = i;
            }
        }
    }

    // Modify the sequence to make it non-boring
    for (int i = idx - max(increasing[idx], decreasing[idx]) + 1; i <= idx; ++i) {
        b[i] = b[idx];
    }

    cout << changes << endl;
    for (int i = 0; i < n; ++i) {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}
