
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

const int N = 2e5 + 9;
const int inf = 1e9;
vector<int> g[N];


void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    vector<int> even, odd;
    for (int i = 1; i <= n;i++){
        if(a[i-1]%2){
            odd.push_back(i);
        }
        else{
            even.push_back(i);
        }
        int x = i + a[i - 1];
        if(x<=n){
            g[x].push_back(i);
            // reverse neoar karon amra onno side dia check ditechi
            // kacher opposite parity
        } 
        int y = i - a[i - 1];
        if(y>=1){
            g[y].push_back(i);
        }
    }
   
    vector<int> d(n + 2, inf);
    queue<int> q;
    vector<int> ans(n + 2, inf);
    for(auto x:even){
        q.push(x);
        d[x] = 0;
    }
    while(q.size()){
        int u = q.front();
        q.pop();
        for(auto v : g[u]){
            if(d[u]+1<d[v]){
                d[v] = d[u] + 1;
                q.push(v);
            }
        }
    }
    for(auto x : odd){
        ans[x] = d[x];
    }
    // even side ber korbo. odd dia suru kore, tai reverse kora lagche
    for (int i = 0; i <= n;i++)
    {
        d[i] = inf;
    }
    for(auto x:odd){
        q.push(x);
        d[x] = 0;
    }
    while(q.size()){
        int u = q.front();
        q.pop();
        for(auto v : g[u]){
            if(d[u]+1<d[v]){
                d[v] = d[u] + 1;
                q.push(v);
            }
        }
    }
    for(auto x : even){
        ans[x] = d[x];
    }
    for (int i = 1; i <= n;i++){
        if(ans[i]==inf){
            cout << -1 << " ";
        }
        else{
            cout << ans[i] << " ";
        }
        
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
