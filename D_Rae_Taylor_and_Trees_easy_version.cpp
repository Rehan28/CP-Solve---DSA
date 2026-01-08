#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

void solve(int test) {
    int n;
    cin >> n;
    int a[n];
    cin(a, n);

    int mn[n];
    int  mx[n];
    mn[0] = a[0];
    for(int i = 1; i < n; i++) {
        mn[i] = min(mn[i-1], a[i]);
    }

    mx[n-1] = a[n-1];
    for(int i = n-2; i >= 0; i--) {
        mx[i] = max(mx[i+1], a[i]);
    }
    int c = 0;
    for(int i = 0; i < n-1; i++) {
        if(mn[i] > mx[i+1]) {
            c = 1;
            break;
        }
    }

    if(c==0){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}

int32_t main() {
    Muku28();
    int test = 1;
    cin >> test;
    for(int i = 1; i <= test; i++) {
        solve(i);
    }
    return 0;
}
