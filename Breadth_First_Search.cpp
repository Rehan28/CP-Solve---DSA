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
const int N = 1e5+9;
vector<int> g[N];
bool vis[N];

void solve(int test) {
    int n;
    cin>>n;
    int pr = n;
    while(n--){
        int u, x;
        cin >> u >> x;
        while(x--){
            int v;
            cin >> v;
            g[u].push_back(v);
        }
    }
    vector<int> dis(pr + 1, inf);// connected na hoile tokhon inf dibe
    // mane jaoa jay na
    queue<int> q;
    q.push(1);
    vis[1] = true;
    dis[1] = 0;
    while(q.size()){
        int u = q.front();
        q.pop();
        for(auto v : g[u]){
            if(!vis[v]){
                dis[v] = dis[u] + 1;
                vis[v] = true;
                q.push(v);
            }
        }
    }
    for (int i = 1;i<=pr;i++){
        if(dis[i]==inf){
            cout << i << " " << -1 << "\n";
        }
        else{
            cout << i << " " << dis[i] << "\n";
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
