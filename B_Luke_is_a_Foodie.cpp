#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n, x;
    cin >> n >> x;
    int a[n];
    cin(a,n);

    int l = a[0] - x;
    int r = a[0] + x;

    int ans = 0;
    for(int i=1;i<n;i++){
        int nll = max(l, a[i] - x);
        int nr = min(r, a[i] + x);
        if(nll > nr){
            ans++;
            l = a[i] - x;
            r = a[i] + x;
        }
        else{
            l = nll;
            r = nr;
        }
    }

    cout << ans << "\n";
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
