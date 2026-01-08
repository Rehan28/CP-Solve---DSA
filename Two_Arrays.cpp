#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

const int mod = 1e9 + 7;

int n,m;
const int N = 1e3 + 5;
int dp[22][N];

int f(int i,int last){
    if(i==2*m){
        return 1;
    }
    int &ans = dp[i][last];
    if(ans!=-1){
        return ans;
    }
    ans = 0;
    for (int j = last; j <= n;j++){
       ans +=  f(i + 1, j);
       ans %= mod;
    }

    return ans;
}


void solve(int test) {
    
    cin >> n >> m;
    memset(dp,-1,sizeof dp);
    int ans = 0;
    for (int i = 1; i <= n;i++){
        ans += f(1, i);
        ans %= mod;
    }
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
