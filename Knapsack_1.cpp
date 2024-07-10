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
#define int long long 
// 1e9 *100 amon tai

const int N = 105;
int n;
int w[N];
int v[N];
int W;
int dp[N][100005];
int dp1[N][100005];

int f(int i,int weight){
    if(i==n){
        return 0;
    }
    int &ans = dp[i][weight];// ata mane ans ar address a dp ache
    if(ans!=-1){
        return ans;
    }
    ans = f(i + 1, weight);
    if(weight+w[i]<=W){
        ans = max(ans, f(i + 1, weight + w[i])+v[i]);
    }
    return ans;
}

int ff(int i,int weight){
    if(i==n){
        return 0;
    }
}
void solve(int test) {
    cin >> n >> W;
    memset(dp, -1, sizeof dp);
    for (int i = 0; i < n;i++){
        cin >> w[i] >> v[i];
    }
    //cout << f(0, 0) << "\n";
    //iterative method
    for (int i = n - 1; i > -1;i--){
        for (int weight = 0; weight <= W;weight++){
            int &ans = dp1[i][weight];
            ans = dp1[i + 1][weight];
            if(weight+w[i]<=W){
                ans = max(ans, dp1[i + 1][weight + w[i]]+v[i]);
            }
        }
    }
    cout << dp1[0][0] << "\n";
}
int32_t main() {
    Muku28();
    int test=1;
    //in>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
