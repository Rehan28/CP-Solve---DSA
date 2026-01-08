#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=1;i<=n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n;
    cin>>n;
    int a[n+2];
    a[0] = INT_MAX;
    a[n+1] = INT_MAX;
    cin(a,n);

    int ans = 0;
    for(int i=1;i<=n;i++) {
       int gap1 = abs(a[i]-a[i+1]);
       int gap2 = abs(a[i]-a[i-1]);
       int gap = min(a[i], gap1);
       gap = min(gap, gap2);
       dbg(i);
       dbg(a[i]);
       dbg(gap1);
       dbg(gap2);
       dbg(gap);
       ans = max(ans,gap);
    }
    cout<<"Case #"<<test<<": "<<ans<<nl;
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
