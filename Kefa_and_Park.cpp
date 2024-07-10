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

const int N = 1e5+9;
bool vis[N];
vector<int> g[N];
int restaurant;
int m;
int cat[N];
int a[N];

void dfs(int u,int x){
    vis[u] = true;
    cat[u] = x;
    if(a[u]==1){
        cat[u]++;
    }
    else{
        cat[u] = 0;
    }
    if(cat[u]>m){
        return;
    }
    if(g[u].size()==1 and u!=1){
        restaurant++; 
    }
    for(auto v : g[u]){
        if(!vis[v]){
            dfs(v,cat[u]);
        }
    }
}   

void solve(int test) {
    int n;
    cin>>n>>m;
    for (int i = 1; i <= n;i++){
        cin >> a[i];
    }
    n--;
    while(n--){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    restaurant = 0;
    dfs(1,0);
    cout << restaurant << "\n";
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
