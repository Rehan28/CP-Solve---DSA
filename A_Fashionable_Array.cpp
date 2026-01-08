#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);

    sort(a, a + n);

    int first_even = n+1;
    int first_odd = n+1;
    for (int i = 0; i < n;i++){
        if(first_even == n+1 && a[i] % 2 == 0) {
            first_even = i+1;
        }
        if(first_odd == n+1 && a[i] % 2 != 0) {
            first_odd = i+1;
        }
    }

    int last_even = 0;
    int last_odd = 0;
    for (int i = 0; i < n;i++){
        if(a[i]%2){
            last_odd = i+1;
        } 
        else {
            last_even = i+1;
        }
    }

    int ans = (first_even-1) + (n - last_even);
    ans = min(ans, (first_odd-1) + (n - last_odd));

    cout<<ans<<"\n";

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
