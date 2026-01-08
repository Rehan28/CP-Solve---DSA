#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long
const int mod = 1e9 + 7;

int sub (int a, int b) {
  a %= mod;
  b %= mod;
  int x = a - b;
  if (x < 0) x += mod;
  return x;
}
//sub korar somoy minus a jete pare tai mod plus kore felte hoy.
void solve(int test) {
    int n, k;
    cin >> n >> k;

    int max_sum = (n * (n + 1)) / 2LL;
    int min_sum = max_sum;
    int ans = 1;

    for (int i = n; i >= k;i--){
        max_sum -= (n - i);
        min_sum -= i;
        ans += (max_sum - min_sum) + 1;
        ans %= mod;
    }
    cout << ans << "\n";
}

int32_t main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
