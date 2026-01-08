#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n;
    cin >> n;

    int lo = 1;
    int hi = n;
    int l = n;
    int r = -1;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;

        cout << 1 << " " << 1 << " " << mid << endl;
        int val; cin >> val;

        cout << 2 << " " << 1 << " " << mid << endl;
        int val1; cin >> val1;

        if (val != val1) {
            l = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }

    lo = l+1; hi = n;
    r = l;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;

        cout << 1 << " " << l+1 << " " << mid << endl;
        int val; cin >> val;

        cout << 2 << " " << l+1 << " " << mid << endl;
        int val1; cin >> val1;

        if (val != val1) {
            r = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    cout << "! " << l << " " << r << endl;

}

int32_t main() {
    //Muku28();

    int test = 1;
    cin >> test;
    for (int i = 1; i <= test; i++) {
        solve(i);
    }
    return 0;
}
