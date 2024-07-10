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

const int N = 100;
const int NN = 1e5+9;
int c[N];
int h[N];
int n,m;
int dp[N][NN];

int cost(int i,int val){
    if(i>n){
        return 0;
    }
    if(dp[i][val]!=-1){
        return dp[i][val];
    }
    int ans = cost(i + 1, val + m);
    if(val>=c[i]){
        val -= c[i];
        ans = max(ans, cost(i + 1, val + m) + h[i]);
    }
    return dp[i][val] = ans;
}

void solve(int test) {
    cin>>n>>m;
    for (int i = 0; i <= n;i++){
        memset(dp[i], -1, sizeof dp[i]);
    }
    for (int i = 1; i <= n;i++){
        cin >> c[i] >> h[i];
        //cout << c[i] << " " << h[i] << "\n";
    }
    int ans = cost(1,0);
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
