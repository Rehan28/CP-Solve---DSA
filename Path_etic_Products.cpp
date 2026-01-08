#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int unsigned long long

const int N = 105;
bool vis[N];
vector<int> g[N];

int val = 1;
int val1 = 1;
int c = 1;
map<int, int> mp;
int ans[N];
int isPrime[N];

void f(){
    for (int i = 2; i < N; i++)
        if (isPrime[i] == 0)
            for (int j = 2 * i; j <N; j += i)
                isPrime[j] = 1;

    for (int i = 100; i >= 2; i--) {
        if (!isPrime[i]) {
            if (val <= val1)
                val *= i; 
            else
                val1 *= i; 
        }
    }

}

void dfs(int u,int call){
    vis[u] = true;
    if(call==1){
        ans[u] = val;
        call = 2;
    }
    else{
        ans[u] = val1;
        call = 1;
    }
    for(auto v : g[u]){
        if(!vis[v]){
            dfs(v, call);
        }
    }
}

void solve(int test) {
    int n;
    cin>>n;

    for (int i = 0; i < n - 1;i++){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    dfs(1, 1);

    for (int i = 1; i <= n;i++){
        cout << ans[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < N;i++){
        g[i].clear();
        vis[i] = false;
    }
}
int32_t main() {
    Muku28();
    int test=1;
    cin>>test;
    f();
    for(int i=1;i<=test;i++) {
        solve(i);
    }

    return 0;
}
