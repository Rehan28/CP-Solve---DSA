#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);

    int left[n];
    left[0] = 0;
    for (int i = 1; i <= n;i++){
        left[i] = __gcd(a[i - 1], left[i - 1]);
    }

    int ans = 0;
    int right = 0;
    for (int i = n; i >= 1;i--){
        ans = max(ans, __gcd(left[i - 1], right));
        right = __gcd(right, a[i - 1]);
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
