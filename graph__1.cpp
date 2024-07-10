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

int g[200][200];
void solve(int test) {
    int n;
    cin>>n;
    for (int i = 1; i <= n;i++){
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k;j++){
            int v;
            cin >> v;
            g[u][v] = 1;
        }
    }
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= n;j++){
            if(j!=1){
                cout << " ";
            }
            cout << g[i][j];
        }
        cout << "\n";
    }
}
int main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
