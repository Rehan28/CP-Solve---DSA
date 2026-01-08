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
    int b[n];
    cin(b, n);

    int suf[n + 1];
    suf[n] = 0;
    for (int i = n - 1; i > -1;i--){
        suf[i] = suf[i + 1] + b[i];
    }

    int ans = 0;
    int sum = 0;
    for (int i = 0; i < n;i++){
        sum += a[i];
        //dbg(sum + suf[i]);
        ans = max(ans, (sum + suf[i]));
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
