#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

const int N = 2e5 + 9;
bool vis[N];
vector<int> g[N];
int c = 0;

void dfs(int u){
    vis[u] = true;
    c++;
    for(auto v:g[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
}

void solve(int test) {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m;i++){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int ans = 0;
    for (int i = 1; i <= n;i++){
        if(!vis[i]){
            c = 0;
            dfs(i);
            ans = max(ans, c);
        }
    }
    cout << ans << "\n";
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
