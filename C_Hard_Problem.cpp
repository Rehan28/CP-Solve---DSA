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

void solve(int test) {
    int m, a, b, c;
    cin >> m >> a >> b >> c;
    int ans = 0;
    int x = m;
    int y = m;
    ans += min(m, a);
    x = m - a;
    x = max(0, x);

    ans += min(m, b);
    y = m - b;
    y = max(0, y);

    ans += min(x, c);
    c -= min(x, c);
    ans += min(c, y);
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
