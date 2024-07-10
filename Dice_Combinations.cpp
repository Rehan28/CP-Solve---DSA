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

const int N = 1e6 + 9;
int dp[N];
int n, ans;

int way(int x){
    if(x==0){
        return 1;
    }
    if(x<=0){
        return 0;
    }
    if(dp[x]!=-1){
        return dp[x];
    }
    int sum = 0;
    for (int i = 1; i <= 6;i++){
        sum += way(x - i);
        sum = sum % mod;
    }
    return dp[x] = sum;
}
void solve(int test) {
    cin>>n;
    // memset(dp, -1, sizeof dp);
    // // ans = way(n);
    // // cout << ans << "\n";
    
    //itretive mathod
    int dp1[n+1] = {0};
    dp1[0] = 1;
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= 6;j++){
            if(i-j>=0){
                dp1[i] += dp1[i - j];
                dp1[i] %= mod;
            }
            
        }
    }
    cout << dp1[n] << "\n";
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
