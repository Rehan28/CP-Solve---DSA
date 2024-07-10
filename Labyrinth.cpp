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
 
int dx[4] = {0, 0, +1, -1};
int dy[4] = {+1, -1, 0, 0};
 
const int N = 1e3 + 9;
string g[N];
bool vis[N][N];
char dis[N][N];
pair<int,int> par[N][N];
 
char way(int i){
    char c;
    if(i==0){c = 'R';}
    else if(i==1){c = 'L';}
    else if(i==2){c = 'D';}
    else{c = 'U';}
    return c;
}
 
void solve(int test) {
    int n,m;
    cin >> n >> m;
    pair<int,int> start, end;
    for (int i = 0; i < n;i++)
    {
        cin >> g[i];
    }
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            if(g[i][j]=='A'){
                start.first = i;
                start.second = j;
            }
            if(g[i][j]=='B'){
                end.first = i;
                end.second = j;
            }
            vis[i][j] = false;
            par[i][j] = make_pair(0,0);
        }
    }
    queue<pair<int,int>> q;
    q.push(start);
    bool f = false;
    while (q.size()){
        pair<int,int> u = q.front();
        int i = u.first;
        int j = u.second;
        q.pop();
        vis[i][j] = true;
        if(i==end.first and j==end.second){
            f = true;
            break;
        }
        for (int k = 0; k < 4;k++){
            int vi = i + dx[k];
            int vj = j + dy[k];
            if((vi>=0 and vi<n and vj>=0 and vj<m) and !vis[vi][vj] and g[vi][vj]!='#'){
                char c = way(k);
                vis[vi][vj] = true;
                q.push(make_pair(vi, vj));
                dis[vi][vj] = c;
                par[vi][vj] = make_pair(i,j);
            }
        }
       
    }
    if(f){
        yes;
        string path = "";
        int x, y;
        x = end.first;
        y = end.second;
        while (1){
            path += dis[x][y];
            int z = x;
            x = par[x][y].first;
            y = par[z][y].second;
            if(x==start.first and y==start.second){
                break;
            }
        }
        reverse(path.begin(), path.end());
        cout << path.size() << "\n";
        cout << path << "\n";
    }
    else{
        no;
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