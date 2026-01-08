#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

const int mod = 1e9 + 7;

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

const int N = 1e5 + 9;
vector<int> g[N];
int sz = 0;
bool vis[N];

void dfs(int u){
    sz++;
    vis[u] = true;
    for (auto v:g[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
}

void solve(int test) {
    int n, k;
    cin >> n >> k;

    for (int i = 1; i < n;i++){
        int a, b, x;
        cin >> a >> b >> x;
        if(x==0){
            g[a].push_back(b);
            g[b].push_back(a);
        }
    }

    int ans = binpow(n, k, mod);
    int m = 0;
    for (int i = 1; i <= n;i++){
        if(vis[i]){
            continue;
        }
        sz = 0;
        dfs(i);
        m += binpow(sz, k, mod);
        m %= mod;
    }
    ans -= m;
    ans += mod;
    ans %= mod;
    cout << ans << "\n";
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
