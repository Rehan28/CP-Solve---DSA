#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int MOD = 1000000007;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    ll l, r; cin >> l >> r;
    ll tot = 0, a = 1, b = 9;
    for (ll i = 1; i < 10; i++) {
      ll x = max(l, a);
      ll y = min(r, b);
      if (x <= y) {
        ll sum = (x + y) * (y - x + 1) / 2;
        // sum = gap*(number 2 tar sum)/2;

        tot = tot + ((sum % MOD) * (i))  % MOD;
        tot %= MOD;
      }
      a = a * 10;
      b = b * 10 + 9;
    }
    cout << tot << "\n";
  }
  return 0;
}