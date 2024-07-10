
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
    ll n;
    cin>>n;
    ll a[n];
    ll b[n];
    cin(a,n);
    ll val = 1e9-1;
    ll x = *min_element(a, a + n);
    for (int i = 0; i < n;i++){
        long double r = ((double)x / (double)a[i]);
        b[i] = (r * val);
        b[i]++;
    }
    ll sum = 0;
    for (int i = 0; i < n;i++){
        sum += b[i];
    }
    for (int i = 0; i < n;i++){
        if((b[i]*a[i])<=sum){
            cout << -1 << "\n";
            return;
        }
    }
    for (int i = 0; i < n;i++){
        cout << b[i] << " ";
    }
    cout << "\n";
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
