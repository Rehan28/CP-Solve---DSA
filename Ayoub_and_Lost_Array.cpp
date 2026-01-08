#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

const int mod = 1e9 + 7;
const int N = 2e5 + 9;
int dp[N][4];
int n, l, r;

int count(int n, int k) {
    if (k == 0) {
      return n / 3;
    }
    else if (k == 1) {
      return n / 3 + (n % 3 >= 1);
    }
    else {
      return n / 3 + (n % 3 >= 2);
    }
}

int f(int i,int sum){
    if(i==n+1){
        return sum == 0;
    }

    int ans = 0;

    if(dp[i][sum]!=-1){
        return dp[i][sum];
    }

    for (int j = 0; j < 3;j++){
        ans += (f(i + 1, (sum + j) % 3)) * (count(r,  j) - count(l-1, j));
        ans %= mod;
    }
    dp[i][sum] = ans;
    return ans;
}

void solve(int test) {

    cin >> n >> l >> r;
    memset(dp, -1, sizeof dp);

    int ans = f(1, 0);
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


