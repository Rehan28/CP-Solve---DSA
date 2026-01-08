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
    int n, m, q;
    cin >> n >> m >> q;
    int a[n];
    cin(a,n);
    int l[m + 1], r[m + 1], val[m + 1];
    for (int i = 1; i <= m;i++){
        cin >> l[i] >> r[i] >> val[i];
    }

    int d[m + 1];
    for (int i = 0; i <= m;i++){
        d[i] = 0;
    }
    while (q--){
        int x, y;
        cin >> x >> y;
        d[x]++;
        d[y + 1]--;
    }

    int op[m + 1];
    op[0] = 0;
    int dif[n + 1];
    for (int i = 0; i <= n;i++){
        dif[i] = 0;
    }
    for (int i = 1; i <= m;i++){
        op[i] = op[i - 1] + d[i];
        int x = op[i] * val[i];
        //dbg(val[i]);
        dif[l[i]] += x;
        dif[r[i]+1] -= x;
    }

    int pfx[n + 1];
    pfx[0] = 0;
    for (int i = 1; i <= n;i++){
        pfx[i] = pfx[i - 1] + dif[i];
        cout << pfx[i] + a[i-1] << " ";
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
