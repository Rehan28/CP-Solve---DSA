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
int n,m;
const int N = 1e3 + 9;
char g[N][N];
bool vis[N][N];

void dfs(int i,int j){
    vis[i][j] = true;
    for (int k = 0; k < 4;k++){
        int x = i + dx[k];
        int y = j + dy[k];
        if((x>=0 and x<n and y>=0 and y<=m) and !vis[x][y] and g[i][j]=='.'){
            dfs(x, y);
        }
    }
}

void solve(int test) {

    cin>>n>>m;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> g[i][j];
        }
    }
    int number_of_room = 0;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            if(!vis[i][j] and g[i][j]=='.'){
                number_of_room++;
                dfs(i, j);
            }
        }
    }
    cout << number_of_room << "\n";
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
