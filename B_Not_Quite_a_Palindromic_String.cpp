#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int one = 0;
    int zero = 0;

    for(int i = 0; i < n; i++) {
        if (s[i] == '1') {
            one++;
        } else {
            zero++;
        }
    }

    int x = min(one, zero);

    int y = max(one, zero);

    y = y - x;

    y = y / 2;

    if(y>k){
        cout << "NO" << nl;
    } 
    else {
        k -= y;
        if(k % 2 == 0) {
            cout << "YES" << nl;
        } else {
            cout << "NO" << nl;
        }
    }
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
