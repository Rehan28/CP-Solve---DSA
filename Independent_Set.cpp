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
int dp[N][2];

void dfs(int u,int parent){
    dp[u][0] = 1;// akta node white hole akbar
    dp[u][1] = 1;// balck hole akbar
    for(auto v:g[u]){
        if(v!=parent){//v jate parent a na jay tree te ata korlye hoy
        //dfs kore last a jaia ans nia asteche
            dfs(v, u);
            dp[u][0] = (1LL*dp[u][0] * (dp[v][0] + dp[v][1]) %mod)%mod;
            // akane u k white rekhe j koyta v ache tader white and black ar sum and u ar jono
            //gula node avhe tader multiple
            dp[u][1] = ( 1LL * dp[u][1]*dp[v][0]) %mod;
            //black sudu tader child ar while gula nibe
        }
    }
}

void solve(int test) {
    int n;
    cin>>n;
    for (int i = 0; i < n - 1;i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1, 0);
    cout <<(dp[1][0]+dp[1][1])%mod<< '\n';
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
