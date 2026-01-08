#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n, m, k;
    cin >> n >> m >> k;

    int lo = 1;
    int hi = m;
    while (lo < hi) {
		int mid = lo + (hi - lo) / 2;

        int i = mid;
        int hi1 = m+1;
        int lo1 = 0;
        while (lo1 < hi1) {
            int mid1 = lo1 + (hi1 - lo1 + 1) / 2;
            int x = (mid1 * i) + (mid1-1);
            if (x<=m) {
                lo1 = mid1;
            } else {
                hi1 = mid1 - 1;
            }
        }
        //dbg(lo);
        int val = (lo1 * i) * n;
        int xx = (lo1 * i) + (lo1);
        xx = m - xx;
        xx = max(xx, 1LL*0);
        val += (xx * n);

		if (val>=k) {
			hi = mid;
		} else {
			lo = mid + 1;
		}
	}

    cout << lo << "\n";
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
