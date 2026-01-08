#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define int long long
#define mod 1000000007

void solve(int test) {
    int n, q;
    cin >> n >> q;
    int a[n];
    cin(a,n);
    int b[n+2] = {0};
    while(q--){
        int l, r;
        cin >> l >> r;
        b[l]++;
        b[r+1]--;
    }
    sort(a, a + n);
    for (int i = 1; i <= n;i++){
        b[i] += b[i - 1];
    }

    vector<int> v;
    for (int i = 1; i <= n;i++){
        v.push_back(b[i]);
    }
    sort(v.begin(), v.end());

    int ans = 0;
    int x = n - 1;
    for(int i=0;i<n;i++){
        ans += a[i] * v[i];
        x--;
    }

    cout << ans << nl;
}
int32_t main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
