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

int main() {
    Muku28();

    int test=1;
    int p;
    while(cin>>p and p){
        map<int, vector<int>> g;// ami janina node ar size koto
        set<int> nodes;
        while(p--){
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
            nodes.insert(u);
            nodes.insert(v);
        }
        int start, ttl;
        while (cin>>start>>ttl and !(start==0 and ttl==0))// 2 tai 0 hoile dukbona
        {
            map<int, int> dis;
            for (auto x : nodes){
                dis[x] = inf;
            }
            queue<int> q;
            q.push(start);
            dis[start] = 0;
            while(q.size()){
                int u = q.front();
                q.pop();
                for(auto v : g[u]){
                    if(dis[u]+1<dis[v]){// inf korar jonno ata use kora jaiteche 
                    // use kora connectiviti check kora jay
                        dis[v] = dis[u] + 1;
                        q.push(v);
                    }
                }
            }
            int not_reachable = 0;
            for(auto x : nodes){
                if(dis[x]>ttl){
                    not_reachable++;
                }
            }
            int reachable = nodes.size() - not_reachable;
            cout << "Case " << test << ": " << not_reachable << " nodes not reachable from node " << start << " with TTL = " << ttl << ".\n";
            test++;
        }
        
    }
    return 0;
}
