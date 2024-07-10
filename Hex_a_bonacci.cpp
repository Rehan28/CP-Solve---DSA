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
#define int long long
const int N = 1e4 + 9;
int dp[N];

int a, b, c, d, e, f;
int fn(int n) {
    if(n<0 and n>5){
        return 0;
    }
    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;
    if(dp[n]!=-1){
        return dp[n];
    }
    return dp[n] = (fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6))%10000007;
}
int32_t main() {
    int n, cases;
    cin >> cases;
    for (int i = 1; i <= cases; i++) {
        memset(dp, -1, sizeof dp);
        cin >> a >> b >> c >> d >> e >> f >> n;
        cout << "Case " << i << ": " << fn(n)%10000007 << "\n";
    }
    return 0;
}
