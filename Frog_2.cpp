#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define mod 100000007

const int N = 1e5 + 9;
const int inf = 1e9 + 9;
 int n;
 int k;
 int a[N];
 int dp[N];

void solve(int test) {
    //memset(dp, -1, sizeof dp);
    cin>>n>>k;
    cin(a,n);
    //cout << cost(0) << "\n";

    int dp1[n + 1];
    for (int i = 0; i < n + 1;i++){
        dp1[i] = inf;
    }
    dp1[n-1] = 0;
    for (int i = n-1; i >-1 ;i--){
        for (int j = i+1;j<=i+k ;j++){
            if(j>=n){
                break;
            }
            int x = abs(a[i] - a[j]) + dp1[j];
            dp1[i] = min(dp1[i],x);
        }
    }
    cout << dp1[0] << "\n";
    // int dp2[n + 1];
    // dp2[0] = 0;
    // for (int i = 1; i < n ;i++){
    //    if(i==1){
    //        dp2[i] = abs(a[i - 1] - a[i]);
    //    }
    //    else{
    //        int x = abs(a[i - 1] - a[i]) + dp2[i - 1];
    //        int y = abs(a[i - 2] - a[i]) + dp2[i - 2];
    //        dp2[i] = min(x, y);
    //    }
    // }
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
