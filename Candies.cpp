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

const int N = 102;
const int S = 1e5 + 2;
int a[N];
int n, x;
int dp[N][S];

void solve(int test) {
    cin>>n>>x;
    cin(a,n);
    int pfx[n+1][x+1];
    pfx[0][0] = 1;
    for (int val = 1; val <= x;val++){
        pfx[0][val] = pfx[0][val - 1] + dp[0][val];
    }
    for (int i = 1; i <= n;i++){
        for (int val = 0; val <= x;val++){
            int &ans = dp[i][val];
            int x = val - a[i - 1];//0 indexing array
            x = max(0, x);
            if(x==0){
                ans = pfx[i - 1][val];
            }
            else{
                ans = (pfx[i - 1][val] - pfx[i - 1][x-1])%mod;
            }
            ans += mod;//negative hoite pare tai add kore then mod korchi
            ans %= mod;
        }
        pfx[i][0] = dp[i][0];
        for (int val = 1; val <= x;val++){
            pfx[i][val] = (pfx[i][val - 1] + dp[i][val]) % mod;
        }
    }
    cout << dp[n][x] << "\n";
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
