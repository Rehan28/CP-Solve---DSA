
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

int n,m,k,d;
const int N = 1e5+9;
const int M = 105;
ll a[M][N];
ll dp[N];

ll sumx(int i,int j, value){
    if(j>m){
        return LONG_LONG_MAX;
    }
    if(j==m){
        return dp[m] = 1;
    }
    value += a[i][j] + 1;
    int x = 1;
    int y = x + j;
    int xy = d + 1;
    ll ans = LONG_LONG_MAX;
    while (y<=m and xy){
        ll val;
        if(dp[y]!=-1){
            val = dp[y];
        }
        else{
            val = sumx(i, y,value)+value;
            dp[y] = val;
        }
        dbg(y);
        dbg(val);
        ans = min(ans, val);
        x++;
        y = x + j;
        xy--;
    }
    return dp[j] = ans;
}

void solve(int test) {
    cin>>n>>m>>k>>d;
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= m;j++){
            cin >> a[i][j];
        }
    }
    ll cost[n + 1];
    for (int i = 2; i <= 2;i++){
        int x = d;
        memset(dp, -1, sizeof dp);
        ll sum = sumx(i,1,0);
        dbg(sum);
        cost[i] = sum;
    }

    ll pfx[n + 1];
    pfx[0] = 0;
    pfx[1] = cost[1];
    for (int i = 2; i <= n;i++){
        pfx[i] = pfx[i - 1] + cost[i];
    }
    ll ans = LONG_LONG_MAX;
    for (int i = k; i <= n;i++){
        ll x = (pfx[i] - pfx[i - k]);
        ans = min(ans, x);
    }
    cout << ans << "\n";
}
int main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
