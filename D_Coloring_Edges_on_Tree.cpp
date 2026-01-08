#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

const int N = 2e5 + 5;
bool vis[N];
vector<int> g[N];
map<pair<int, int>, int> edge_color;
int mx = 0;

void dfs(int u,int p_col,int parent){
    vis[u] = true;
    int col = 1;
    for(auto v: g[u]){
        if(v==parent) continue;
        if(col==p_col) col++;
        edge_color[{u,v}] = col;
        edge_color[{v,u}] = col;
        dfs(v,col,u);
        mx = max(mx, col);
        col++;
        
    }
}

void solve(int test) {
    int n;
    cin>>n;
    
    vector<pair<int, int>> edges;
    for (int i = 1; i < n;i++){
        int u, v;
        cin >> u >> v;
        edges.push_back(make_pair(u, v));
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for(int i=1;i<n;i++){
        if(!vis[i]){
            dfs(i, 0,0);
        }
    }

    cout << mx << nl;
    for(auto it: edges){
        cout << edge_color[{it.first, it.second}] << nl;
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
