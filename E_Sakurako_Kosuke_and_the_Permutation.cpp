#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define int long long
#define mod 1000000007

const int N = 1e5;
vector<int> g[N];
int par[N];
bool vis[N];
int ans;

void dfs(int u) {
    vis[u] = true;
   
    for (auto v : g[u]) {
        if (!vis[v]) { 
            par[v] = u;
            dfs(v);
        } 
        else{
            //dbg(v);
            int length = 1;
            int x = u;
            int t = 5;
            while(t--){
                length++;
                if(x==v){
                    break;
                }
                //cout << x << " " << par[x] << "\n";
                x = par[x];
            }
            //dbg(length);
            ans += ((length-2)/2);
        }
    
    }

}

void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    ans = 0;
    for (int i = 0; i < n;i++){
        //g[i + 1].push_back(a[i]);
        if(a[i]!=i+1){
            g[a[i]].push_back(i + 1);
        }
    }
    for (int i = 1; i <= n;i++){
        if(!vis[i]){
            dfs(i);
        }
    }
    cout << ans << "\n";
    for (int i = 0; i <= n;i++){
        g[i].clear();
        vis[i] = false;
        par[i] = 0;
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
