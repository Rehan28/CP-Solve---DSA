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

void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);

    int pfx[n + 1] = {0};
    int mxf[n + 1] = {0};
    int last = INT_MIN;
    for (int i = 1; i <= n;i++){
        pfx[i] = pfx[i - 1] + a[i - 1];
    }

    int pfx1[n + 2] = {0};
    int mxf1[n + 2] = {0};
    int last1 = INT_MIN;
    for (int i = n; i>=1;i--){
        pfx1[i] = pfx1[i + 1] + a[i-1];
    }

    for (int i = 1; i <= n;i++){
        if(pfx1[i]>pfx1[i-1]){
            mxf1[i] = pfx1[i];
            last1 = pfx[i];
        }
        else{
            mxf1[i] = mxf1[i + 1];
        }
    }

    int res = INT_MIN;
    for (int i = 1; i <= n;i++){
        int ans = pfx[i];
        ans += (mxf1[i]);
        if(i!=n and a[i-1]>a[i]){
            ans += a[i - 1];
            ans -= abs(a[i]);
        }
        res = max(ans, res);
    }
    cout << res << "\n";
}
int32_t main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
