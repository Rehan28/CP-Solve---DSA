#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

const int N = 2e5 + 5;
vector<int> g[N];
map<int, int> ans;
int val = 0;
map<int, int> vis;

void dfs(int u){
    ans[u] = val;
    vis[u] = 1;
    val++;
   // dbg(u);
    for(auto v:g[u]){
        if(vis[v]==0){
            dfs(v);
        }
        
    }
}

void solve(int test) {
    int n;
    cin>>n;

    
    map<int, int> d;
    for (int i = 0; i < n - 1;i++){
        int u, v, x, y;
        cin >> u >> v >> x >> y;

        if(x>y){
            g[v].push_back(u);
            d[u]++;
        }
        else{
            g[u].push_back(v);
            d[v]++;
        }
    }

    for (int i = 1; i <= n;i++){
        dbg(i);
        for (int j = 0; j < g[i].size();j++){
            cout << g[i][j] << " ";
        }
        cout << "\n";
    }

    vector<int> v;
    for (int i = 1; i <= n;i++){
        if(d[i]==0){
            v.push_back(i);
        }
    }

    val = 1;
    for (int i = 0; i < v.size();i++){
        int x = v[i];
        if(vis[x]==0){
            dbg(x);
            dfs(x);
        }
    }

    for (int i = 1; i <= n;i++){
        cout << ans[i] << " ";
    }
    cout << "\n";
    ans.clear();
    vis.clear();
    for (int i = 1; i <= n;i++){
        g[i].clear();
    }
}
int32_t main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
