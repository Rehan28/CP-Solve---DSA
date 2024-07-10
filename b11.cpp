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
ll maxSum(ll a[], ll size)
{
    ll m = 0, me = 0;
    for (int i = 0; i < size; i++) {
       me = me + a[i];
        if (m < me)
            m = me;
 
        if (me < 0)
            me = 0;
    }
    return m;
}
void solve(int test) {
    ll n,k;
    cin>>n>>k;
    ll a[n];
    cin(a,n);
    ll ans = 0;
    for (int i = 0; i < n;i++){
        ans += a[i];
    }
    if (ans < 0){
        ans = ((ans % mod) + mod) % mod;
    }
    ll msum = maxSum(a, n);
    for (int i = 0; i < k;i++){
        ans = (ans + msum) % mod;
        msum += msum%mod;
    }
    cout << ans << "\n";
}
int main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
