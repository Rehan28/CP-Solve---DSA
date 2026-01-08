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
#define int long long

int one = 0;
int zero = 0;
const int N = 3e5 + 9;
int a[N];
vector<int> g[N];
bool vis[N];
void dfs(int u,int p) {
    if(p==0){
        zero += a[u - 1];
        p = 1;
    }
    else{
        one += a[u - 1];
        p = 0;
    }
    vis[u] = 1;
    for(auto v : g[u]){
        if(!vis[v]){
            dfs(v, p);
        }
    }
}

void solve(int test) {
    int n;
    cin>>n;
    cin(a,n);
    one = 0;
    zero = 0;
    for (int i = 0; i < n - 1;i++){
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for (int i = 1; i <= n;i++){
        if(!vis[i]){
           dfs(i, 0); 
        }
    }
    int ans = one+zero;
    ans += min(one, zero);
    cout << ans << "\n";
    for (int i = 1; i <= n;i++){
        g[i].clear();
        vis[i] = false;
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
