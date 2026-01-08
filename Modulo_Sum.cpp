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

const int N = 1e3 + 9;
int dp[N][N][2];
int a[N];
int n, m;

bool f(int i,int sum,int ff){
    if(i==n){
        return sum == 0 and ff == 1;
    }
    if(dp[i][sum][ff]!=-1){
        return dp[i][sum][ff];
    }
    dp[i][sum][ff] = f(i + 1, (sum + a[i]) % m, 1);
    if(dp[i][sum][ff]!=1){
        dp[i][sum][ff] = f(i + 1, sum, ff);
    }
    return dp[i][sum][ff];
}

void solve(int test) {
    cin >> n >> m;
    if(n>=m){
        yes;
        return;
    }
    cin(a,n);
    memset(dp, -1, sizeof dp);
    for (int i = 0; i < n;i++){
        a[i] %= m;
    }
    if(f(0,0,0)){
        yes;
    }
    else{
        no;
    }
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
