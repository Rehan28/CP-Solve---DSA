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

int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};

const int N = 1e3;
char g[N][N];
bool vis[N][N];
int n,m;
int ans;

void dfs(int a,int b){
    vis[a][b] = true;
    ans++;
    for (int i = 0; i < 4;i++){
        int x, y;
        x = a+dx[i];
        y = b+dy[i];
        if((x>0 and x<=m and y>0 and y<=n) and !vis[x][y] and g[x][y]=='.'){
            dfs(x, y);
        }
    }
}

void solve(int test) {
    
    cin>>n>>m;
    char a[m+1][n+1];
    int x, y;
    for (int i = 1; i <= m;i++){
        for (int j = 1; j <= n;j++){
            char c;
            cin >> c;
            g[i][j] = c;
            if(c=='@'){
                x = i;
                y = j;
            }
        }
    }
    ans = 0;
    dfs(x, y);
    cout <<"Case "<<test<<": "<< ans << "\n";
    for (int i = 0; i < N;i++){
        for (int j = 0; j <N;j++){
            g[i][j] = '0';
            vis[i][j] = false;
        }
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
