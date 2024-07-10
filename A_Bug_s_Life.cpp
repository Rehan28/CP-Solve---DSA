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

const int N = 1e6 + 9;
vector<int> g[N];
int color[N];
int vis[N];
bool is_bicolor;

void bicolor(int u){
    vis[u] = 1; // red
    for(auto v : g[u]){
        if(!vis[v]){
            color[v] = color[u] ^ 1;//color change
            bicolor(v);
        }
        else if(color[u]==color[v]){
            is_bicolor = false;
        }
    }
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
    is_bicolor = true;
    for (int i = 0; i <= n;i++){
        if(!vis[i]){
            bicolor(i);
        }
    }
    cout << "Scenario #" << test << ":\n";
    if(is_bicolor){
        cout << "No suspicious bugs found!\n";
    }
    else{
        cout << "Suspicious bugs found!\n";
    }
    for (int i = 0; i <= n;i++){
        g[i].clear();
        vis[i] = false;
        color[i] = 0;
    }
}
int main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
