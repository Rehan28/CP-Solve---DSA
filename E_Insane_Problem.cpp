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
const int N = 1e10 + 10;

void solve(int test) {
    int k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;
    vector<int> p;
    int x = 1;
    while(x<N){
        p.push_back(x);
        x *= k;
    }
    int ans = 0;
    for (int i = 0; i < p.size();i++){
        int mx = r2 / p[i];
        mx = min(mx, r1);
        int mn = l2 / p[i];
        if(l2%p[i]){
            mn++;
        }
        mn = max(mn, l1);

        int xx = (mx - mn) + 1;
        ans += max(1LL*0, xx);
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
