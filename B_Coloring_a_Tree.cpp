#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

const int N = 1e4 + 5;
vector<int> g[N];
int c[N];
int ans = 1;
int vis[N];

void dfs(int u,int p){
    vis[u] = 1;
    for(auto v:g[u]){
        if(p!=v and !vis[v]){
            if(c[v]!=c[u]){
                ans++;
            }
            dfs(v,u);
        }
    }
}

void solve(int test) {
    int n;
    cin>>n;

    for (int i = 2; i <= n;i++){
        int x;
        cin >> x;
        g[x].push_back(i);
        g[i].push_back(x);
    }
    for(int i=1;i<=n;i++){
        cin>>c[i];
    }
    dfs(1,0);
    cout<<ans<<nl;
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
