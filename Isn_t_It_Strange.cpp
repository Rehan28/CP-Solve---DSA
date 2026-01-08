#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


map<int, int> present;

void f(){
    int lc = 1;
    for(int i = 1; i < 50; i++) {
        lc = (lc*i)/(__gcd(lc, i));
        present[lc] = i;
    }
}

void solve(int test) {
    int n;
    cin>>n;
    if(present[n] == 0) {
        cout << -1 << nl;
        return;
    }
    else{
        cout << present[n] << nl;
        for(int i=1; i <= present[n]; i++) {
            cout << i << " ";
        }
        cout << nl;
    }
}
int32_t main() {
    Muku28();
    f();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
