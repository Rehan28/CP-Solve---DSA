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

const int N = 200;
int g[N][N];
bool vis[N][N];
int di[8] = {+1, -1, 0, 0, +1, +1, -1, -1};//amar 8 ta direction tai 8 ta possible dik dlahlam
int dj[8] = {0, 0, +1, -1, +1, -1, +1, -1};

void dfs(int i,int j){
        vis[i][j] = true;
        int c = g[i][j];
        // if(g[i+1][j]==c and !vis[i+1][j]){
        //     dfs(i + 1, j);
        // }
        // if(g[i-1][j]==c and !vis[i-1][j]){
        //     dfs(i - 1, j);
        // }
        // if(g[i][j+1]==c and !vis[i][j+1]){
        //     dfs(i, j+1);
        // }
        // if(g[i][j-1]==c and !vis[i][j-1]){
        //     dfs(i, j-1);
        // }
        // if(g[i+1][j+1]==c and !vis[i+1][j+1]){
        //     dfs(i + 1, j+1);
        // }
        // if(g[i+1][j-1]==c and !vis[i+1][j-1]){
        //     dfs(i + 1, j-1);
        // }
        // if(g[i-1][j+1]==c and !vis[i-1][j+1]){
        //     dfs(i - 1, j+1);
        // }
        // if(g[i-1][j-1]==c and !vis[i-1][j-1]){
        //     dfs(i - 1, j-1);
        // }


        // ata dia onek code kom lagche
        for (int k = 0; k < 8;k++){
            int x = i + di[k];
            int y = j + dj[k];
            if(g[x][y]==c and !vis[x][y]){
                dfs(x, y);
            }
        }
}

int main() {
    Muku28();
    while (1){
        int n, m;
        cin >> n >> m;
        if (n == 0){
            break;
        }
        for (int i = 1; i <= n;i++){
            // line ar first and last a 2 ta extra char use korchi
            string ss;
            cin >> ss;
            for (int j = 1; j <= m;j++){
                if(ss[j-1]=='@'){
                    g[i][j] = 1;
                }
            }
        }
        int ans = 0;
        for (int i = 1; i <= n;i++){
            for (int j = 1; j <= m;j++){
                if(!vis[i][j] and g[i][j]==1){
                    ans++;
                    dfs(i, j);
                }
            }
        }
        cout << ans << "\n";
        for (int i = 0; i <= n;i++){
            for (int j = 0; j <= m;j++){
                g[i][j] = 0;
                vis[i][j] = false;
            }
        }
    }
    
    return 0;
}
