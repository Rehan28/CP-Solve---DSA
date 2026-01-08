#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

const int N = 1e6 + 5;

vector<vector<int>> g(N);

bool vis[N];
vector<int> vp;

void dfs(int u) {
    vis[u] = true;
    vp.push_back(u);
    for(auto v : g[u]) {
        if(!vis[v]) {
            dfs(v);
        }
    }
}

void solve(int test) {
    int n, m;
    cin >> n >> m;
    int a[n+1];
    
    for(int i=1;i<=n;i++) {
        cin>> a[i];
    }

    for(int i=0;i<m;i++) {
        int x, y;
        cin>> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    for(int i=1;i<=n;i++) {
        if(!vis[i]) {
            vp.clear();
            dfs(i);
            vector<int> v;
            for(auto x : vp) {
               v.push_back(a[x]);
            }

            sort(v.begin(), v.end());
            reverse(v.begin(), v.end());
            sort(vp.begin(), vp.end());
            for(int j=0;j<vp.size();j++) {
                a[vp[j]] = v[j];
            }
        }
    }

    for(int i=1;i<=n;i++) {
        cout << a[i] << " ";
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
