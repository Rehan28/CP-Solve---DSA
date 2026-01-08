#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n, k;
    cin >> n >> k;
    int a[n];
    cin(a,n);

    int ans = 0;
    for(int i=0;i<n-1;i++){
        if(a[i]>=a[i+1]){
            int gap = a[i]-a[i+1]+1;
            int m = gap/k;
            if(gap%k!=0){
                m++;
            }
            a[i+1] += m*k;
            ans += m;
        }
    }
    cout<<ans<<nl;
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
