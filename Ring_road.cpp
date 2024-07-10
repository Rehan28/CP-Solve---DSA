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

const int N = 1e3;
vector<int> g[N];
map<pair<int, int>,int> cost;
int side_cost = 0;
int ans = INT_MAX;

void dfs(int u,int p){
    side_cost += cost[{p, u}];
    if(u==1 and p!=0){ 
        ans = min(side_cost, ans);
        side_cost = 0;
        //round ses hoiche
        return;
    }
    for(auto v : g[u]){
        if(v!=p){
            dfs(v, u);
        }
    }
}

void solve(int test) {
    int n;
    cin>>n;
    while(n--){
        int u,v,c;
        cin >> u >> v>>c;
        g[u].push_back(v);
        g[v].push_back(u);
        cost[{u,v}] = 0;
        cost[{v,u}] = c;
    }
    dfs(1,0);
    cout << ans << "\n";
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
