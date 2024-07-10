#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
// Muku28
const int N = 1e6;
int d[N + 1];
bool f[N + 1];
//--------------28--------------//
int main() {
    Muku28();
    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j += i) {
            d[j]++;
        }
    }
    for (int i = 0; i <= N; i++) {
        f[i] = true;
    }
    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j += i) {
            if (d[j] % d[i] != 0 or d[j] <= 3) {
                f[j] = false;
            }
        }
    }
    vector<int> v;
    for (int i = 1; i <= N; i++) {
        if (f[i]) {
            v.push_back(i);
        }
    }
    sort(v.begin(), v.end());
    for (int i = 108; i <= v.size(); i += 108) {
        cout << v[i - 1] << "\n";
    }
    return 0;
}
