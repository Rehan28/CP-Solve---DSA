#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

const int N = 1e5 + 9;
vector<int> g[N], path, vis;
bool f;

void dfs(int u, int en) {
    if (f){
        return;
    } 
    vis[u] = 1;
    path.push_back(u);
    if (u == en) {
        f = true;
        return;
    }
    for (int v : g[u]) {
        if (!vis[v]){
            dfs(v, en);
        } 
        if (f) return;  
    }
    path.pop_back();  
}

int dfs1(int u,int p){
    vis[u] = 1;
    int ans = 0;
    for(auto v : g[u]){
        if(!vis[v] and v!=p){
            ans += dfs1(v,p);
        }
    }
    return ans + 1;
}


void solve(int test) {
    int n, st, en;
    cin>>n>>st>>en;
    n--;

    vis.assign(n + 1, 0);
    path.clear();
    f = false;

    for (int i = 0;i<n;i++){
        int x, y;
        cin>>x>>y;
        g[x].push_back(y); 
        g[y].push_back(x);
    }

    dfs(st, en);
    
    vis.assign(n + 1, 0);

    for (int i = 0;i<path.size();i++){
        int sum = 0;
        dbg(path[i]);
        for(auto x : g[path[i]]){
            if(i==0){
                if(x==path[i+1]){
                    continue;
                }
                else{
                    sum += dfs1(x, path[i]);
                }
            }
            else if(i==path.size()-1){
                if(x==path[i-1]){
                    continue;
                }
                else{
                    sum += dfs1(x, path[i])+1;
                }
            }
            else{
                if(x==path[i-1] or x==path[i+1]){
                    continue;
                }
                else{
                    sum += dfs1(x, path[i])+1;
                }
            }
            dbg(sum);
        }
        dbg(sum);
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
