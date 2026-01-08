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

const int N = 2e5 + 5;
int n;
ll a[N];
ll b[N];
ll dp[N];

ll f(int i){
    ll &ans = dp[i];
    if(dp[i]!=-1){
        return ans;
    }
    ans = b[i];
    for (int j = i + 1; j < n;j++){
        if(a[j]>a[i]){
            ans = max(ans, f(j)+b[i]);
        }
    }
    return ans;
}

void solve(int test) {
    cin>>n;
    cin(a,n);
    cin(b, n);
    // memset(dp, -1, sizeof dp);
    // ll ans = -1;
    // for (int i = 0; i < n;i++){
    //     ans = max(ans, f(i));
    // }
    // cout << ans << "\n";

    
}
int main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
