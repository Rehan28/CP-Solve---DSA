#include <bits/stdc++.h>
using namespace std;

void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define mod 1000000007
#define ll long long


void solve(int test) {
    ll n;
    cin>>n;
    set<ll> ans;
    ans.insert(n);
    ll p = 1;
    for (ll i = 0; i < 60;i++){
        ll x = n;
        if(x & ( p << i)){
            x = (x & ~(p << i));
            x = (x | (0 << i));
            if(x==0){
                continue;
            }
            ans.insert(x);
        }
    }
    cout << ans.size() << "\n";
    for (auto x : ans){
        cout << x << " ";
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
