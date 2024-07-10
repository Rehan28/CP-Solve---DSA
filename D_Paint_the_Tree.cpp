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

const int N = 2e5 + 9;
vector<int> g[N];
bool vis[N];
int dis[N];
int dis1[N];
int path[N];
int tt[N];
int ans;
int t;
int a, b,pp;
void dfs(int u){
    vis[u] = true;
    for(auto v:g[u]){
        if(!vis[v]){
            dis1[v] = dis1[u] + 1;
            t++;
            dfs(v);
        }
    }
    if(g[u].size()==1){
        pp = max(pp, dis1[u]);
    }
    t++;
}

void solve(int test) {
    int n;
    cin>>n;
    for (int i = 0; i <= n;i++){
        g[i].clear();
        vis[i] = false;
        dis[i] = mod;
        path[i] = 0;
        tt[i] = 0;
    }
    cin >> a >> b;
    for (int i = 1; i < n;i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    ans = 0;
    queue<int> q;
    q.push(a);
    dis[a] = 0;
    while(q.size()){
        int u=q.front();
        q.pop();
        for(auto v:g[u]){
            if(dis[v]>dis[u]+1){
                q.push(v);
                dis[v] = dis[u] + 1;
                path[v] = u;
            }
        }
    }
    int x = dis[b];
    if(x%2){
        x /= 2;
        x++;
    }
    else{
        x /= 2;
    }
    ans += x;
    int p = b;
    while(x--){
        p = path[p];
    }
    //p is meeting point
    pp = 0;
    dis1[p] = 0;
    t = 0;
    dfs(p);
    t -= pp;
    t--;
    ans += t;
    cout << ans << "\n";
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
