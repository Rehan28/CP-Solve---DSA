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
    cin(b,n);

    int x = *min_element(a, a+n);
    int a_sum = accumulate(a, a+n, 0LL);
    int y = *min_element(b, b+n);
    int b_sum = accumulate(b, b+n, 0LL);

    int ans = min((x*n)+b_sum, (y*n)+a_sum);
    cout<<ans<<nl;
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
