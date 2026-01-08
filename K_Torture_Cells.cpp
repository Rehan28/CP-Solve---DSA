#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define int long long
#define mod 1000000007

const int N = 100;
int vis[N][N]; 
int n, m;
string s[N];

int f(int i,int j){
    if(i>=n or j>=m or i<0 or j<0 or vis[i][j]==1 or s[i][j]=='#'){
        return 0;
    }
    int ans = 1;
   
    vis[i][j] = 1;
    ans += f(i + 1, j) + f(i - 1, j) + f(i, j + 1) + f(i, j - 1);
    return ans;
}

void solve(int test) {
    cin >> m >> n;
    for (int i = 0; i < N;i++){
        for (int j = 0; j < N;j++){
            vis[i][j] = 0;
        }
    }
    int pos1, pos2;
    for (int i = 0; i < n;i++){
        cin >> s[i];
        for (int j = 0; j < m;j++){
            if(s[i][j]=='@'){
                pos1 = i;
                pos2 = j;
            }
        }
    }
    int ans = f(pos1, pos2);
    cout <<"Case "<<test<<": "<<ans << "\n";
}
int32_t main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
