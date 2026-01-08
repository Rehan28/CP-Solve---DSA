#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

bool f[1000001];
void solve(int test) {
    int n;
    cin>>n;
    int a[n + 1];
    int x = 0;
    for (int i = 2; i <= n;i++){
        if(!f[i]){
            x++;
            for (int j = i; j <= n;j = j+i){
                f[j] = true;
                a[j] = x;
            }
        }
    }

    for(int i=2;i<= n;i++){
        cout << a[i] << " ";
    }
    cout << "\n";
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
