#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    if(n==1){
        cout << a[0] << "\n";
        return;
    }
    sort(a, a + n);
    int x = (a[0] + a[n - 1]);
    x--;
    for (int i = 1; i < n - 1;i++){
        x += a[i];
        x--;
    }
    cout << x << "\n";
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
