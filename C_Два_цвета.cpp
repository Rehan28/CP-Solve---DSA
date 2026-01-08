#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n, m;
    cin >> n >> m;
    vector<int> v;

    for (int i = 0; i <m;i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());
    int ans = 0;
    for (int i = 1; i < n;i++){
        int x = n - i;

        int p = v.end() - lower_bound(v.begin(), v.end(), i);
        int p1 = v.end() - lower_bound(v.begin(), v.end(), x);

        ans += (p * p1) - min(p, p1);
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
