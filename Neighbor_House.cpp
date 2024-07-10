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

const int N = 50;
const int inf = 1e9;
int n;
int color[N][4];
int dp[N][N];

int f(int i,int last){
    if(i==n){
        return 0;
    }
    int &ans = dp[i][last];
    if(ans!=-1){
        return ans;
    }
    ans = inf;
    for (int j = 1; j <= 3;j++){
        if(j!=last){
            ans = min(ans, f(i + 1, j)+color[i][j]);
        }
    }
    return ans;
}

void solve(int test) {
    memset(dp, -1, sizeof dp);
    cin>>n;
    for (int i = 0; i < n;i++){
        for (int j = 1; j <= 3;j++){
            cin >> color[i][j];
        } 
    }
    cout <<"Case "<<test<<": "<< f(0, 0) << "\n";
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
