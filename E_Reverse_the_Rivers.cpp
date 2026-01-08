#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define int long long
#define mod 1000000007

void solve(int test) {
    int n, m, q;
    cin >> n >> m >> q;
    int a[n+1][m+1];
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    
    vector<int> v[m+1]; 
    for (int i = 1; i <= m; i++) {
        v[i].push_back(a[1][i]);
        for (int j = 1; j < n; j++) { 
            a[j + 1][i] = a[j][i] | a[j + 1][i];
            v[i].push_back(a[j + 1][i]);
        }
    }
    

    while (q--) {
        int m;
        cin >> m;
        bool f = true;
        vector<pair<int, int>> vp;

        while (m--) {
            int x;
            char y;
            int val;
            cin >> x >> y >> val;
            if (y == '>') {
                val++;
                auto it = lower_bound(v[x].begin(), v[x].end(), val);
                if (it != v[x].end()) {
                    int pos = it - v[x].begin() + 1;
                    vp.push_back({pos, n});
                } else {
                    f = false;
                }
            } else {
                auto it = lower_bound(v[x].begin(), v[x].end(), val);
                int pos = it - v[x].begin();
                if (pos == 0) {
                    f = false;
                } else {
                    vp.push_back({1, pos});
                }
            }
        }

        if (f) {
            sort(vp.begin(), vp.end());
            int mny = INT_MAX, mxx = INT_MIN;
            for (auto xx : vp) {
                mny = min(mny, xx.second);
                mxx = max(mxx, xx.first);
            }

            if (mny >= mxx) {
                cout << mxx << nl;
            } else {
                cout << -1 << nl;
            }
        } else {
            cout << -1 << nl;
        }
    }
}

int32_t main() {
    Muku28();
    int test = 1;
    //cin >> test;
    for (int i = 1; i <= test; i++) {
        solve(i);
    }
    return 0;
}
