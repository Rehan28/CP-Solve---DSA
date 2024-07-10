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

int power(int x,int p){
    int val = 1;
    while(p>0){
        if(p%2==1){
            val = (val * x) % mod;
        }
        p /= 2;
        x = (x * x) % mod;
    }
    return val % mod;
}

void solve(int test) {
    int n, m;
    cin >> n >> m;
    int x = (power(5, n) + power(7, n)) % mod;
    int y = (power(5, m) + power(7, m)) % mod;
    cout << __gcd(x, y) << "\n";
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
