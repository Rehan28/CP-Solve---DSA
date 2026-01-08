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
        int n, b, c; 
        cin >> n >> b >> c;
		if (b == 0) {
			if (c >= n) {
				cout << n << "\n";
			} else if (c >= n - 2) {
				cout << n - 1 << "\n";
			} else {
				cout << -1 << "\n";
			}
		} else {
		    if (c >= n) cout << n << "\n";
			else cout << n - max(0ll, 1 + (n - c - 1) / b) << "\n";
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
