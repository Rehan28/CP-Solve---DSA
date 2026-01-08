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
    int n, x;
    cin >> n >> x;
    int ans = 0;
    for (int i = 1; i <= n;i++){
        int y = n / i;
        for (int j = i; j <= y;j++){
            int mult = i * j;
            if(i+j+1>x or mult>n){
                break;
            }
            int lo = 1;
            int hi = n;
            while (lo < hi) {
                int mid = lo + (hi - lo + 1) / 2;
                if ((i+j+mid)<=x and (mult+(i*mid)+(j*mid)<=n)) {
                    lo = mid;
                } else {
                    hi = mid - 1;
                }
	        }
            if(i+j+lo<=x and (mult+(i*lo)+(j*lo)<=n)){
               ans += lo;
               if(i!=j){
                   ans += lo;
               }
            }
        }
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
