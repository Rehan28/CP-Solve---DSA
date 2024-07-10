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

const int inf = 1e9;
const int N = 1e5 + 9;
vector<int> g[N];
bool vis[N];

void solve(int test) {
    int n,m;
    cin>>n>>m;
    while(m--){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<int> path(n + 1, inf);
    queue<int> q;
    q.push(1);//starting point
    vis[1] = true;
    path[1] = 0;
    while(q.size()){
        int u = q.front();
        q.pop();
        for(auto v : g[u]){
            if(!vis[v]){
                path[v] = u;
                vis[v] = true;
                q.push(v);
            }
        }
    }
    vector<int> ans;
    ans.push_back(n);
    while(n){
        if(path[n]==inf){
            cout << "IMPOSSIBLE\n";
            return;
        }
        ans.push_back(path[n]);
        n = path[n];
    }
    reverse(ans.begin(), ans.end());
    cout << ans.size() - 1 << "\n";
    for (int i = 1; i < ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << "\n";
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
