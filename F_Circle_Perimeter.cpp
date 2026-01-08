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
const int inf = 1e10;

void solve(int test) {
    int n;
    cin>>n;
    int sum = 0;
    int val1 = (n + 1) * (n + 1);
    int val = n * n;
    for (int i = n; i > 0;i--){
        int hi = inf;
        int lo = 0;
        bool f = true;
        while (lo<hi){//min true
            int mid = lo + (hi - lo) / 2;
            int x = (i * i) + (mid * mid);
            if(x>=val and x<val1 and mid<=i){
                f = false;
            }
            if (x>=val) {
                hi = mid;
            } else {
                lo = mid + 1;
            }
       }
       if(f){
        continue;
       }
       if(lo==0){
           sum -= 4;
       }
       int first = lo-1;
       hi = inf;
       while (lo < hi) {
           int mid = lo + (hi - lo + 1) / 2;
           int x = (i * i) + (mid * mid);
           if (x>=val and x<val1){
               lo = mid;
            } 
            else {
                hi = mid - 1;
            }
	    }
        lo = min(i, lo);
        int gap = lo - first;
        sum += (gap * 8);
        if(lo==i){
            sum -= 4;
        }
    }
    cout << sum << "\n";
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
