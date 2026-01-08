#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

const int N = 201;
int two;
int five;
int a[N];
int n;
int k;
int dp[N][6000+5];

void solve(int test) {

    cin >> n >> k;
    cin(a,n);
    memset(dp, -1, sizeof(dp));
    dp[0][0] = 0;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        two = 0;
        five = 0;
        while(a[i] % 2 == 0) {
            two++;
            a[i] /= 2;
        }
        while(a[i] % 5 == 0) {
            five++;
            a[i] /= 5;
        }


        for (int j = k-1; j >= 0; j--) {
            for (int kk = 0; kk < 6000; kk++) {
                if (dp[j][kk] == -1) continue;
                dp[j+1][kk+five] = max(dp[j+1][kk+five], dp[j][kk]+two);
                //dbg(dp[j+1][kk+five]);
            }
        }
    }
    for (int i = 1; i < 6000; i++){
        ans = max(ans, min(i, dp[k][i]));
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
