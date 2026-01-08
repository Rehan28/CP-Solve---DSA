#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

const int mod = 1e9 + 7;


int binPow(int a, int n) {
    if (n == 0) return 1;
    if (n == 1) return a % mod;
    int ret = binPow(a, n / 2);
    ret = (ret * ret) % mod;
    if (n & 1)
        ret = (ret * a) % mod;
    return ret;
}

void solve(int test) {
    int a, b, n, x;
    cin >> a >> b >> n >> x;

    int ax = (binPow(a, n) * x) % mod;

    int an = (binPow(a, n) - 1) % mod;
    an *= binPow(a - 1, mod - 2);
    an %= mod;//geometric series sum

    int bx = (b*an) % mod;

    int ans = (ax + bx) % mod;
    if(a==1){
        ans = (x + ((n % mod) * b) % mod) % mod;
    }
    cout << ans << nl;
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
