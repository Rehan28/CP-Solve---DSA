#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;


const int N = 2005;
int n, k;
int dp[N][N];
int mod = 1e9 + 7;

int f(int i,int last){
    if(i==k+1){
        return 1;
    }

    int ans = 0;
    if(dp[i][last]!=-1){
        return dp[i][last];
    }
    for (int j = last; j <= n;j = j+last){//ata seive ar moto cole
        ans += f(i + 1, j);
        ans %= mod;
    }
    dp[i][last] = ans;
    return ans;
}

void solve(int test) {
    
    cin >> n >> k;

    memset(dp, -1, sizeof dp);
    int ans = f(1, 1);

    cout << ans << "\n";
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
