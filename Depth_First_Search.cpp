
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
int start_time[N];
int end_time[N];
int t = 0;
void dfs(int u){
    vis[u] = true;
    t++;
    start_time[u] = t;
    for(auto v : g[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
    t++;
    end_time[u] = t;
}
void solve(int test) {
    int n;
    cin>>n;
    for (int i = 0; i < n;i++){
        int u, k;
        cin>>u>>k;
        while (k--){
            int v;
            cin >> v;
            g[u].push_back(v);
        }
        sort(g[u].begin(), g[u].end());
    }
   
    for (int i = 1; i <= n;i++){
        if(!vis[i]){
            dfs(i);
        }
    }
    for (int i = 1; i <= n;i++){
         cout <<i<<" "<< start_time[i] << " " << end_time[i] << "\n";
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
