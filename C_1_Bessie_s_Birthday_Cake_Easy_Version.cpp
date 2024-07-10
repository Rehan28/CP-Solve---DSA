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
    ll x,n,k;
    cin>>x>>n>>k;
    ll a[n+1];
    cin(a,n);
    sort(a, a + n);
    a[n] = a[0];
    ll ans = 0;
    ans +=  (n - 2);
    for (ll i = 0; i < n;i++){
        if(i==n-1){
            int xx = x - a[i];
            xx += (a[0]);
            if(xx==2){
               ans++; 
            }
        }
        else if(abs(a[i+1]-a[i])==2){
            ans++;
        }
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
