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


const int N = 405;
const ll inf = 1e18 + 9;
int n;
ll a[N];
ll dp[N][N];

ll f(int l,int r){
    if(l==r){
        return 0;
    }
    ll total = 0;
    for (int i = l; i <= r;i++){
        total += a[i];
    }
    ll &ans = dp[l][r];
    if(ans!=-1){
        return ans;
    }
    ans = inf;
    for (int i = l; i < r;i++){
        ans = min(ans, f(l, i) + f(i + 1, r));
    }
    ans += total;
    return ans;
}


void solve(int test) {
    cin>>n;
    cin(a,n);
    memset(dp, -1, sizeof dp);
    cout << f(0, n - 1) << "\n";
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
