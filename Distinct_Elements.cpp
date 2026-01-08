#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long
const int mod = 1e9 + 7;

void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);

    map<int, int> mp;
    for (int i = 0; i < n;i++){
        mp[a[i]]++;
    }

    int ans = 1;
    for(auto x : mp){
        ans = (ans*(x.second + 1))%mod;
    }
    cout << ans-1 << "\n";//karon 0000 ta nebona
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
