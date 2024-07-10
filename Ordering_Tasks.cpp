
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

const int N = 1e3 + 9;
vector<int> g[N];
int indegree[N];

void solve(int test) {
    int n,m;
    while (cin >> n >> m and n!=0 and m!=0){
        while (m--){
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            indegree[v]++;
        }
        vector<int> z;
        for (int i = 1; i <= n;i++){
            if(indegree[i]==0){
                z.push_back(i);
                vis[i] = true;
            }
        }
        vector<int> ans;
        while (z.size()){
            int u = z.back();
            z.pop_back();
            ans.push_back(u);
            vis[u] = true;
            for(auto v : g[u]){
                indegree[v]--;
                if(!vis[v] and indegree[v]==0){
                    z.push_back(v);
                }
            }
        }
        for(auto x : ans){
            cout << x << " ";
        }
        for (int i = 0; i <= n;i++){
            g[i].clear();
            indegree[i] = 0;
            vis[i] = false;
        }
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
