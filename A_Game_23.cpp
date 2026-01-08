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
    int n, m;
    cin >> n >> m;
    int ans = -1;
    if(m%n==0){
        int x = m / n;
        int cnt = 0;
        while(x%2==0){
            x /= 2;
            cnt++;
        }
        while(x%3==0){
            x /= 3;
            cnt++;
        }
        if(x==1){
            ans = cnt;
        }
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
