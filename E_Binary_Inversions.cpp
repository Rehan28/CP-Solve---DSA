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
    ll inver = 0;
    ll zero = 0;
    for (int i = n - 1; i > -1;i--){
        if(a[i]==1){
            inver += (zero);
        }
        else{
            zero++;
        }
    }
    ll mx = 0;
    ll one[n + 1] = {0};
    ll z[n + 1] = {0};
    one[0] = a[0];
    for (int i = 1; i < n;i++){
        one[i] = one[i - 1] + a[i];
    }
    if(a[n-1]==0){
        z[n - 1] = 1;
    }
    for (int i = n - 2; i > -1;i--){
        if(a[i]==0){
            z[i] = z[i + 1] + 1;
        }
        else{
            z[i] = z[i + 1];
        }
    }
    for (int i = 1; i < n;i++){
        if(a[i]==1){
            ll g = one[i - 1];
            ll loss = z[i];
            ll val = g - loss;
            mx = max(val, mx);
        }
    }
    for (int i = 0; i < n-1;i++){
        if(a[i]==0){
            ll g = z[i+1];
            ll loss = one[i];
            ll val = g - loss;
            mx = max(val, mx);
        }
    }
    inver += mx;
    cout << inver << "\n";
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
