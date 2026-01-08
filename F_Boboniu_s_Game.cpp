#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define int long long
#define mod 1000000007

const int N = 201;
int n, m;
int a[N], b[N];
int dp[N][512];

int f(int i, int x) {
    if(i==n){
        return x;
    }
    int ans = 1e18;
    if(dp[i][x]!=-1){
        return dp[i][x];
    }
    for (int j = 0; j < m;j++){
        int v = x | (a[i] & b[j]);
        int val = f(i+1, v);
        ans = min(ans, val);
    }
    dp[i][x] = ans;
    return ans;
}


void solve(int test) {
    
    cin >> n >> m;
    cin(a,n);
    cin(b,m);

    memset(dp, -1, sizeof dp);

    int ans = f(0, 0);
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
