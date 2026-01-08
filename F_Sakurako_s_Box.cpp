#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define mod 1000000007
#define int unsigned long long

int DOM(int a, int m){
    int ans = 1;
    int x = m - 2;
    while (x > 0) {
        if (x % 2 == 1) {
            ans = (ans * a) % m;
        }
        a = (a * a) % m;
        x /= 2;
    }
    return ans;
}

void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    int x = (n * (n - 1)) / 2;
    int sum = 0;
    int sum1 = 0;
    for (int i = 0; i < n;i++){
        sum += a[i];
        sum %= mod;
        sum1 = (sum1 + (a[i] * a[i]) % mod) % mod;
    }
    int val = ((sum * sum) % mod - sum1 + mod)%mod;
    // if(val<0){
    //     val += mod;
    // }
    // val %= mod;
    //cout << val << "\n";
    val = (val * DOM(2, mod)) % mod;
    x = x % mod;
    int inmod = DOM(x, mod)%mod;
    int ans = (val * inmod) % mod;
    cout << ans << "\n";
}
int32_t main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}

