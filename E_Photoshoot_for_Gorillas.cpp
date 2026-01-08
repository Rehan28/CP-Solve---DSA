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
    int n,m,k;
    cin >> n >> m >> k;
    int w;
    cin >> w;
    int b[w];
    cin(b, w);
    ll a[n + 1][m + 1];
    for (int i = 0; i <= n;i++){
        for (int j = 0; j <= m;j++){
            a[i][j] = 0;
        }
    }

    int x = 1;
    for (int i = 1; i <= n-k+1;i++){
        for (int j = 1; j <= m-k+1;j++){
            for (int ii = i; ii < i+k;ii++){
                for (int jj = j; jj < j+k;jj++){
                    a[ii][jj]++;
                }
            }
        }
    }
    vector<ll> v;
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= m;j++){
            v.push_back(a[i][j]);
        }
    }

    sort(v.rbegin(), v.rend());
    sort(b, b + w);
    //dbg(v.size());
    x = 0;

    ll ans = 0;
    for (int i = w - 1; i > -1;i--){
        ans += (1LL*b[i]*v[x]);
        x++;
    }
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
