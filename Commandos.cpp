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
const int N = 1e3 + 9;
vector<int> g[N];

void solve(int test) {
    int n,r;
    cin>>n>>r;
    while(r--){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int start, end;
    cin >> start >> end;
    int dis[n];//n-1 tai
    vector<int> d(n, inf);
    queue<int> q;
    q.push(start);
    d[start] = 0;
    dis[start] = d[start];// dis total and d front theke
    // start hoite distance
    while(q.size()){
        int u = q.front();
        q.pop();
        for(auto v : g[u]){
            if(d[u]+1<d[v]){// tar mane d[v] te akhono infinity
                d[v] = d[u] + 1;
                dis[v] = d[v];
                q.push(v);
            }
        }
    }
    for (int i = 0; i < n;i++){
        d[i] = inf;
        // abr bfs calabo tai
    }
    //end to bfs
    // and q already faka
    q.push(end);
    d[end] = 0;
    dis[end] += d[end];// agertar sathe add korbo
    while(q.size()){
        int u = q.front();
        q.pop();
        for(auto v : g[u]){
            if(d[u]+1<d[v]){
                d[v] = d[u] + 1;
                dis[v] += d[v];
                q.push(v);
            }
        }
    }
    int time = 0;
    for (int i = 0; i < n;i++){
        time = max(time, dis[i]);
    }
    cout << "Case " << test << ": " << time << "\n";
    for (int i = 0; i < n;i++){
        g[i].clear();
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
