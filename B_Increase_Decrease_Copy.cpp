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
    ll b[n];
    cin(b, n);
    ll x;
    cin >> x;
    bool f = false;
    ll sum = 1;
    for (int i = 0; i < n;i++){
        if(x>=a[i] and x<=b[i]){
            f = true;
        }
        else if(x<=a[i] and x>=b[i]){
            f = true;
        }
        sum += abs(a[i] - b[i]);
    }
    if(f){
        cout << sum << "\n";
    }
    else{
        ll mn = LONG_LONG_MAX;
        for (int i = 0; i < n;i++){
            mn = min(mn, abs(a[i] - x));
            mn = min(mn, abs(b[i] - x));
        }
        cout << sum + mn << "\n";
    }
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
