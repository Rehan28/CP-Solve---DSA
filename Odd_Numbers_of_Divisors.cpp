#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
const int N = 1e5 + 9;
int spf[N + 1];
int divisor;
vector<ll> k_d[N+1];
void divi() {
    for (int i = 1; i <= N; i++) {
        spf[i] = i;
    }
    for (int i = 2; i <= N; i++) {
        for (int j = i; j <= N; j += i) {
            spf[j] = min(spf[j], i);
        }
    }
    for (int i = 1; i <= N; i++) {
        int x = i;
        divisor = 1;
        while (x > 1) {
            int power = 0;
            int p = spf[x];
            while (x % p == 0) {
                x /= p;
                power++;
            }
            power = 2 * power;
            divisor *= (( power) + 1);
        }
        k_d[divisor].push_back(1ll * i * i);
    }
}
int Rehan(int test) {
    ll k, l, u;
    cin >> k >> l >> u;
    int ans = 0;
    // for(auto x : k_divisor[k]){
    //     if(x>=l and x<=u){
    //         ans++;
    //     }
    // }
    ans = upper_bound(k_d[k].begin(), k_d[k].end(), u) - lower_bound(k_d[k].begin(), k_d[k].end(), l);
    cout << ans<<"\n";
    //cout << ans << "\n";
    return 0;
}
//--------------28--------------//
int main() {
    Muku28();
    int t = 1;
    cin >> t;
    divi();
    for (int i = 1; i <= t; i++) {
        Rehan(i);
    }
    return 0;
}