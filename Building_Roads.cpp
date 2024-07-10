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

const int N = 2e5+9;
vector<int> g[N];
bool vis[N];

void dfs(int u){
    vis[u] = true;
    for(auto v : g[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
}

void solve(int test) {
    int n, m;
    cin >> n >> m;
    while (m--){
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int min_road = 0;
    vector<int> connection;
    for (int i = 1; i <= n;i++){
        if(!vis[i]){
            dfs(i);
            min_road++;
            connection.push_back(i);
        }
    }
    
    cout << min_road-1 << "\n";//road - 1
    n = connection.size();
    for (int i = 0; i < n - 1;i++){
        cout << connection[i] << " " << connection[i + 1] << "\n";
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
