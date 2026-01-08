#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long
const int mod = 1e9 + 7;

void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    sort(a, a + n);

    int pfx[n + 2];
    int sfx[n + 2];

    pfx[0] = 0;
    for (int i = 1; i <= n;i++){
        a[i - 1] *= a[i - 1];
        pfx[i] = pfx[i - 1] + a[i - 1];
        pfx[i] %= mod;
    }

    // sfx[n + 1] = 0;
    // for (int i = n; i > 0;i--){
    //     sfx[i] = sfx[i + 1] + a[i - 1];
    //     sfx[i] %= mod;
    // }

    // int ans = 0;
    // for (int i = 1; i <= n;i++){
    //     int val = ((a[i - 1] * (i - 1))%mod - pfx[i - 1] + mod) % mod;
    //     val = (val * a[i - 1]) % mod;

    //     int val1 = (sfx[i + 1] - ((n - i) * (a[i - 1])) % mod + mod) % mod;
    //     val1 = (val1 * a[i - 1]) % mod;
    //     ans += (val + val1);
    //     ans %= mod;
    // }


    // using (a-b)*(a+b) = a^2-b^2 formula
    int ans = 0;
    for (int i = 1; i <= n;i++){
        int val = ((a[i - 1] * (i - 1))%mod - pfx[i - 1] + mod) % mod;
        ans += val;
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
