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

const int N = 1e3 + 9;
int n;
string s[N];
ll dp[N][N];

ll f(int i,int j){
    if(i==n or j==n){
        return 0;
    }
    if(s[i][j]=='*'){
        return 0;
    }
    if(i==n-1 and j==n-1){
        return 1;
    }
    ll &ans = dp[i][j];
    if(ans!=-1){
        return ans;
    }
    ans = 0;
    ans += f(i + 1, j);
    ans += f(i, j + 1);
    return ans%mod;                                                                                                                                     
}

void solve(int test) {
    cin >> n;
    memset(dp, -1, sizeof dp);
    for (int i = 0; i < n;i++){
        cin >> s[i];
    }
    cout << f(0, 0) << "\n";
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
