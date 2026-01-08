#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n, q;
    cin >> n >> q;
    int a[n + 2];
    a[0] = 0;
    a[n + 1] = 1e18+1;
    int real[n + 2];
    real[0] = 0;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        real[i] = a[i];
        a[i] = a[i] - i;
        dbg(a[i]);
    }
    while (q--) {
        int k, lo = 0, hi = n + 1;
        cin >> k;
        
        while (lo != hi) {//max true use kor hoiche
            int mid = (lo + hi + 1) / 2; 
            if (a[mid] >= k) {
                hi = mid - 1; 
            } else {
                lo = mid; 
            }
        }
        
        cout << real[lo] + (k - a[lo]) << "\n"; 
  }

    
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
