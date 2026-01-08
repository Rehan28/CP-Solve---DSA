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
    cin(a,n);

    int l = 0, r = n - 1;
    int ans = 0;

    while(l < r) {
        int h = min(a[l], a[r]);
        int width = r - l;
        ans = max(ans, h * width);

        if(a[l] < a[r]) l++;
        else r--;
    }

    cout << ans << nl;
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
