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

const int N = 105;
const int S = 1e6 + 9;
int n, x;
int a[N];
int dp[S];

int f(int sum){
    // sum dia possible
    if(sum>x){
        return 0;
    }
    if(sum==x){
        return 1;
    }
    int &ans = dp[sum];
    if(ans!=-1){
        return ans;
    }
    ans = 0;
    for (int j = 0; j < n;j++){
        ans += (f(sum + a[j])%mod);
        ans %= mod;
    }
    return ans;
}

void solve(int test) {
    cin>>n>>x;
    cin(a,n);
    // memset(dp, -1, sizeof dp);
    // cout << f(0) << "\n";
    dp[x] = 1;
    for (int sum = x; sum > -1;sum--){
        for (int i = 0; i < n;i++){
            if(sum+a[i]<=x){
                dp[sum] += dp[sum + a[i]];
                dp[sum] %= mod;
            }
        }
    }
    cout << dp[0] << "\n";
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
