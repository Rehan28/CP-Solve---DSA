#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int a, b, k;
    cin >> a >> b >> k;
    
    if(a==b or (a < k and b < k)) {
        cout << 1 << nl;
    }
    else{
        int gc = __gcd(a, b);
        if(a/gc <= k and b/gc <= k) {
            cout << 1 << nl;
        }
        else{
            cout << 2 << nl;
        }
    }

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
