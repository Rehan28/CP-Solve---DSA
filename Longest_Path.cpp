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

const int N = 2e5 + 9;
vector<int> g[N];
int dp[N];

int long_path(int u){

    int &ans = dp[u];
    if(ans!=-1){
        return ans;
    }
    ans = 0;
    for(auto v:g[u]){
        ans = max(ans, long_path(v)+1);
    }
    return ans;
}

void solve(int test) {
    int u, v;
    cin >> u >> v;
    for (int i = 0; i < v;i++){
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
    }
    int ans = 0;
    memset(dp, -1, sizeof dp);
    for (int i = 1; i <= u;i++){
        ans = max(ans, long_path(i));
    }
    cout << ans << "\n";
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
