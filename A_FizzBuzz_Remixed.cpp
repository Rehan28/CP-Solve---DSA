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
    int ans = 0;
    int l = 2;
    int y = min(n, l);
    for (int i = 0; i <= y;i++){
        if(i%3==i%5){
            ans++;
            //cout<<i<<" ";
        }
    }
    int x = n / 15;
    if(x>0){
        ans += 3 * (x-1);
        for (int i = x*15; i <= n;i++){
        if(i%3==i%5){
            ans++;
            //cout<<i<<" ";
        }
    }
    }
    
    cout << ans << nl;
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
