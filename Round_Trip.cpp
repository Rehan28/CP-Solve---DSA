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

const int N = 1e5 + 9;
vector<int> g[N];
int col[N];
int par[N];
int ed;
int start;
bool ok;

void dfs(int u){
    col[u] = 1;
    for(auto v : g[u]){
        if(col[v]==0){
            par[v] = u;
            dfs(v);
        }
        else if(col[v]==1 and v!=par[u]){
            ed = u;
            start = v;
            ok = true;
        }
    }
    col[u] = 2;
}

void solve(int test) {
    int n,m;
    cin>>n>>m;
    while(m--){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    ok = false;
    for (int i = 1; i <= n;i++)
    {
        if(col[i]==0){
            dfs(i);
        }
    }
    if(ok){
        vector<int> path;
        path.push_back(start);
        while (1){
            path.push_back(ed);
            ed = par[ed];
            if(ed==start){
                path.push_back(ed);
                break;
            }
        }
        cout << path.size() << "\n";
        for (int i = 0; i < path.size();i++){
            cout << path[i] << " ";
        }
        cout << "\n";
    }
    else{
        cout << "IMPOSSIBLE\n";
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
