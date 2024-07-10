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

const int N = 1e5 + 9;
vector<int> g[N];
bool vis[N];
int reacable_people[N];

void dfs(int u){
    vis[u] = true;
    reacable_people[u]++;
    for(auto v : g[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
}
//O(k*(m+n)*t)
void solve(int test) {
    int k,n,m;
    cin>>k>>n>>m;
    int a[k];
    cin(a, k);
    while (m--){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
    }
    for (int i = 0; i < k;i++){
        dfs(a[i]);
        for (int j = 1; j <= n;j++){
            vis[j] = false;
        }
    }
    int place_count = 0;
    for (int i = 1; i <= n;i++){
        if(reacable_people[i]==k){
            place_count++;
        }
    }
    cout << "Case " << test << ": "<< place_count << "\n";
    for (int j = 1; j <= n;j++){
        g[j].clear();
        reacable_people[j] = 0;
    }
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
