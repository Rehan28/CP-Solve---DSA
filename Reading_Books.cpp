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
    cin(a,n);
    sort(a, a + n);
    ll sum = 0;
    for (int i = 0; i < n;i++){
        sum += a[i];
    }
    if(a[n-1]>(sum-a[n-1])){
        cout << 2 * a[n - 1] << "\n";
    }
    else{
        cout << sum << "\n";
    }
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
