#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define mod 1000000007

void solve(int test) {
    int n, x, y;
    cin >> n >> x >> y;
    int a[n];
    cin(a,n);
    sort(a, a + n);
    int c = x;
    x = min(x, y);
    y = max(y, c);
    int ans = *max_element(a, a + n) - *min_element(a, a + n);
    a[n - 1] += y;
    for (int i = n-1; i>0;i--){
        int bmod = (a[i] - a[i - 1]) % y;
        bmod = bmod % x;
        int smod = (a[i] - a[i - 1]) % x;
        if(bmod<=smod){
            a[i - 1] = a[i] - bmod;
        }
        else{
            a[i - 1] = a[i] - smod;
        }
        cout << a[i - 1] << "\n";
    }
    ans = min(ans, (*max_element(a, a + n) - *min_element(a, a + n)));
    cout << ans << "\n";
}
int main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
