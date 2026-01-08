#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n, x;
    cin >> n >> x;
    if(n==2 and x==0){
        cout << "NO\n";
    }
    else if(n==1){
        cout << "YES\n";
        cout << x << "\n";
    }
    else if(n==2){
        cout << "YES\n";
        cout << 0<<" "<<x << "\n";
    }
    else{
        int xx = 1 << 18;
        int yy = 1 << 17;
        cout << "YES\n";
        cout << xx << " " << yy << " ";
        int xr = xx ^ yy;
        for (int i = 1; i < n - 2;i++){
            xr = xr ^ i;
            cout << i << " ";
        }
        x = xr ^ x;
        cout << x << "\n";
    }
}
int32_t main() {
    Muku28();
    int test=1;
   // cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
