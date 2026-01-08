#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

void solve(int test) {
    int n;
    cin >> n;
    int a[n+1];
    for (int i = 1; i <= n; i++){ 
        cin >> a[i];
    }
    int pfx[n+1];
    pfx[0] = 0;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        pfx[i] = pfx[i-1] + a[i];
        sum += a[i];
    }
    int mx = 0;
    int mn = LLONG_MAX;
    for (int i = 1; i <= n; i++) {
        int l = ((i * i) - i) - pfx[i - 1];
        //dbg(l);
        mn = min(mn, l);
        //dbg(mn);
        int r = ((i * i) + i) - pfx[i];
        //dbg(r);
        mx = max(mx, r - mn);
    }

    cout << sum + mx << nl;
}

int32_t main() {
    Muku28();
    int test = 1;
    cin >> test;
    for (int i = 1; i <= test; i++) {
        solve(i);
    }
    return 0;
}
