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

void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    int b[n];
    cin(a,n);
    cin(b, n);
    ll ans = 0;
    for (int i = 0; i < n;i++){
        ans += (1LL * a[i] * b[i]);
    }
    //odd length subarray
    ll total_sum = ans;
    for (int i = 1; i < n - 1;i++){
        int j = i - 1;
        int k = i + 1;
        ll sum = total_sum;
        for (; j > -1 and k < n;j--,k++){
            sum -= (1LL * a[j] * b[j]);
            sum -= (1LL * a[k] * b[k]);
            //rev mult
            sum += (1LL * a[j] * b[k]);
            sum += (1LL * a[k] * b[j]);
            //each subarray check
            ans = max(ans, sum);
        }
        
    }
    //even length subarray
    for (int i = 0; i < n - 1;i++){
        int j = i;
        int k = i + 1;
        ll sum = total_sum;
        for (; j > -1 and k < n;j--,k++){
            sum -= (1LL * a[j] * b[j]);
            sum -= (1LL * a[k] * b[k]);
            //rev mult
            sum += (1LL * a[j] * b[k]);
            sum += (1LL * a[k] * b[j]);
            //check
            ans = max(ans, sum);
        }
        
    }
    cout << ans << "\n";
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
