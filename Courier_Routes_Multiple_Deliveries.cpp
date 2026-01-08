#include <bits/stdc++.h>
using namespace std;
void muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

void solve(int test) {
    int n, m;
    cin >> n >> m;
    vector<int> u(m), v(m), w(m);
    for(int i = 0; i < m; i++) {
        cin >> u[i] >> v[i] >> w[i];
    }
    int k;
    cin >> k;
    const int inf = LLONG_MAX / 4;
    vector<int> dis(n + 1, inf);
    dis[1] = 0;

    for(int i = 1; i <= k - 1; i++) {
        vector<int> temp = dis;
        for(int i = 0; i < m; i++) {
            if(dis[u[i]] < inf) {
                temp[v[i]] = min(temp[v[i]], dis[u[i]] + w[i]);
            }
        }
        dis = temp;
    }

    int ans = dis[n];
    if(ans >= inf) ans = -1;
    cout << ans << nl;
}

int32_t main() {
    muku28();
    int test = 1;
    cin >> test;
    for(int i = 1; i <= test; i++) {
        solve(i);
    }
    return 0;
}
