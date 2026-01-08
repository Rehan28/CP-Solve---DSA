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
#define int long long 

void solve(int test) {
    int n, k;
    cin >> n >> k;
    int a[n];
    cin(a,n);
    sort(a, a + n);
    int sum = 0;
    for (int i = 0; i < n;i++){
        sum += a[i];
    }

    int hi = a[0];
    int lo = -1e9 + 9;
    while (lo < hi) {
		int mid = lo + (hi - lo + 1) / 2;
        int sum1 = 0;
        for(int i=0;i<n;i++){
            sum1 += mid;
        }
        if (sum1<=k) {
			lo = mid;
		} else {
			hi = mid - 1;
		}
	}
    
    int pfx[n];
    pfx[0] = a[0];
    for (int i = 1; i < n;i++){
        pfx[i] = pfx[i - 1] + a[i];
    }
    
    int ans = LONG_LONG_MAX;
    sum -= a[0];
    int st = lo;
    int N = n-1;
    for (int i = st; i >= (st - n);i--){
        int ans1 = a[0] - i;
        int sum1 = sum + i;
        if(sum1<=k){
            ans = min(ans, ans1);
        }
        lo = 1;
        hi = N;
        while (lo < hi) {
		    int mid = lo + (hi - lo) / 2;
            int val = (mid + 1) * i;
            int x = (n - 1 - mid);
            val += (pfx[x] - pfx[0]);
            if (val<=k) {
                hi = mid;
            } else {
                lo = mid + 1;
            }
	    }
        ans1 += lo;
        ans = min(ans, ans1);
    }
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
