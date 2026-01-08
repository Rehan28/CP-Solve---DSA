#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

const int N = 105;
vector<int> g[N];
bool vis[N];
int a[N];

void dfs(int u,int val){
    a[u] = val;
    if (val==1){
        val = 2;
    }
    else{
        val = 1;
    }
    vis[u] = true;
    for(auto v : g[u]){
        if(vis[v]==false){
            dfs(v, val);
        }
    }
}

void solve(int test) {
    int n;
    cin>>n;
    for (int i = 0; i < n;i++){
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    dfs(1, 1);

    for (int i = 1; i <= n;i++){
        cout << a[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i <= n;i++){
        vis[i] = false;
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
