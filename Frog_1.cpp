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

const int N = 1e5 + 9;
const int inf = 1e9 + 9;
 int n;
 int a[N];
 int dp[N];

 int cost(int i){
     if(i==n-1){
        return 0;
     }
     if(i>=n){
        return inf;
     }
     if(dp[i]!=-1){
        return dp[i];
     }
     int ans = cost(i + 1) + (abs(a[i] - a[i + 1]));
     ans = min(ans,cost(i + 2) + (abs(a[i] - a[i + 2])));
     return dp[i] = ans;
 }

void solve(int test) {
    memset(dp, -1, sizeof dp);
    cin>>n;
    cin(a,n);
    int dp1[n + 1];
    dp1[n-1] = 0;
    for (int i = n-2; i >-1 ;i--){
        if(i==n-2){
            dp1[i] = abs(a[i] - a[i+1]);
        }
        else{
            int x = abs(a[i] - a[i + 1]) + dp1[i+1];
            int y = abs(a[i] - a[i + 2]) + dp1[i+2];
            dp1[i] = min(x, y);
        }
    }
    int dp2[n + 1];
    dp2[0] = 0;
    for (int i = 1; i < n ;i++){
       if(i==1){
           dp2[i] = abs(a[i - 1] - a[i]);
       }
       else{
           int x = abs(a[i - 1] - a[i]) + dp2[i - 1];
           int y = abs(a[i - 2] - a[i]) + dp2[i - 2];
           dp2[i] = min(x, y);
       }
    }
    //cout << dp1[0] << "\n";
    cout << dp2[n-1] << "\n";
    //cout << cost(0) << "\n";
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
