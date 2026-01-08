#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define int long long
#define mod 1000000007

void solve(int test) {
    int n, k;
    cin>>n>>k;
    vector<pair<int, int>> vp;
    for (int i = 0; i < n;i++){
        int a, b;
        cin >> a >> b;
        vp.push_back({a, b});
    }
    sort(vp.begin(), vp.end());
    int i= 0;
    int ans = 0;
    while (k>0){
        ans = vp[i].first;
        k -= vp[i].second;
        i++;
    }
    cout << ans << "\n";
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
