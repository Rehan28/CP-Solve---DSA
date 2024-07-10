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

const int N = 1e3;
vector<int> g[N];
bool vis[N];
bool is_bicolor;
int color[N];

void bicolor(int u){
    vis[u] = true;
    for(auto v : g[u]){
        if(!vis[v]){
            color[v] = color[u] ^ 1;//ulta color
            bicolor(v);
        }
        else if(color[u]==color[v]){
            is_bicolor = false;
        }
    }
}

void solve(int test) {
    int n;
    while(cin>>n and n){
        int m;
        cin >> m;
        while(m--){
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        is_bicolor = true;
        // for (int i = 0; i < n;i++){
        //     if(!vis[i]){
        //         bicolor(i); 
        //     }
        // }
        bicolor(0);
        // The graph must be strongli connected
        if(is_bicolor){
            cout << "BICOLORABLE.\n";
        }
        else{
            cout << "NOT BICOLORABLE.\n";
        }
        for (int i = 0; i <= n;i++){
            g[i].clear();
            color[i] = 0;
            vis[i] = false;
        }
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
