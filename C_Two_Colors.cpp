#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

const int N = 2e5 + 9;
int n, m;
int b[N + 1];

void solve(int test) {

    cin >> n >> m;
    int a[m];
    cin(a,m);
    sort(a, a + m);
    b[0] = 0;
    for (int i = 0; i < m;i++){
        b[1]++;
        b[a[i] + 1]--;
    }

    for (int i = 1; i <= n;i++){
        b[i] += b[i - 1];
    }

    int ans = 0;

    int x = n;
    if(n%2){
        x++;
    }
    for (int i = a[m - 1]; i >= a[0];i--){
        int val = n - i;
       
        if(val>=0){
             if(x/2==i){
                ans += 2 * (b[val]-1);
             }
             else{
                 ans += 2 * ((b[val]-1)*b[i]);
             }
        }
        if(x/2==i){
            break;
        }
    }
    cout << ans << "\n";

    for (int i = 1; i <= n;i++){
        b[i] = 0;
    }
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
