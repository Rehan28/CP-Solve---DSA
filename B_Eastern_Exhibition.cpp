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
const int N = 1e5 + 2;
ll x[N], y[N];
void solve(int test) {
    int n;
    cin>>n;
    for (int i = 1; i <= n;i++){
        cin >> x[i] >> y[i];
    }
    sort(x, x + n+1);
    sort(y, y + n+1);
    ll ans = (x[(n+2) / 2] - x[(n + 1) / 2]) + 1;
    ans *= (y[(n+2) / 2] - y[(n+1) / 2]) + 1;
    cout << ans << "\n";
}
int main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
