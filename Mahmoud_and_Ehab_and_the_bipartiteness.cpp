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

const int inf = 1e9;
const int N = 1e5 + 9;
vector<int> g[N];
bool vis[N];
int dep[N];

void dfs(int u){
    vis[u] = true;
    if(dep[u]==inf){
        dep[u] = 0;
    }
    for(auto v : g[u]){
        if(!vis[v]){
            dep[v] = dep[u] + 1;
            dfs(v);
            vis[v] = true;
        }
    }
}

void solve(int test) {
    int n;
    cin>>n;
    int m = n - 1;
    while(m--){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1);
    ll red = 0;
    ll blue = 0;
    for (int i = 1; i <= n;i++){
        if(dep[i]%2){
            red++;
        }
        else{
            blue++;
        }
    }
    ll ans = red * blue;
    ans -= (n - 1);
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
