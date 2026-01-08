#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;
    int ans = 0;
    if(x<=y){

        if(a<=k){
            int val = k - a;
            ans += (val / x);
            k -= ((val/x)*x);
            ans++;
            k -= x;
        }
        if(b<=k){
            int val = k - b;
            ans += (val / y);
            k -= ((val/y)*y);
            ans++;
            k -= y;
        }
    }
    else{

        if(b<=k){
            int val = k - b;
            ans += (val / y);
            k -= ((val/y)*y);
            ans++;
            k -= y;
        }
        if(a<=k){
            int val = k - a;
            ans += (val / x);
            k -= ((val/x)*x);
            ans++;
            k -= x;
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
