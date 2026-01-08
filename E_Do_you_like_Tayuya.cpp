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
    int b[6];
    cin(b, 6);
    int n;
    cin>>n;
    int a[n];
    cin(a,n);

    int c[7][n];

    for (int x = 0; x < 6;x++){
        for (int i = 0; i < n;i++){
            c[x][i] = a[i] + b[x];
        }
    }

    for (int x = 0; x < 6;x++){
        for (int i = 0; i < n;i++){
            c[x][i] = a[i] + b[x];
            cout << c[x][i] << " ";
        }
        cout << "\n";
    }
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
