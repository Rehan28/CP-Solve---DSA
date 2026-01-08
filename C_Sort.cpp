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
    int n,q;
    cin >> n >> q;
    string a, b;
    cin >> a >> b;
    int pfxa[27][n+1];
    int pfxb[27][n+1];
    for (int i = 1; i <= 26;i++){
        for (int j = 0; j <= n;j++){
            pfxa[i][j] = 0;
            pfxb[i][j] = 0;
        }
        for (int j = 1; j <= n;j++){
            pfxa[i][j] += pfxa[i][j - 1];
            pfxb[i][j] += pfxb[i][j - 1];
            int x = a[j-1] - 'a' + 1;
            if(x==i){
                pfxa[i][j]++;
            }
            x = b[j - 1] - 'a' + 1;
            if(x==i){
                pfxb[i][j]++;
            }
        }
    }
    while(q--){
        int x, y;
        cin >> x >> y;
        int ans = 0;
        for (int i = 1; i <= 26;i++){
            int val = pfxa[i][y] - pfxa[i][x - 1];
            int val1 = pfxb[i][y] - pfxb[i][x - 1];
            
            ans += abs(val - val1);
        }
        cout << ans/2 << "\n";
    }
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
