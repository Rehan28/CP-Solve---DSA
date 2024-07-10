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
int dp[N][4];
int n;
vector<int> a;
vector<int> b;
vector<int> c;

int happy(int p,int i){
    if(i==n){
        return 0;
    }
    if(dp[i][p]!=-1){
        return dp[i][p];
    }
    int ans = 0;
    if(p==0){
        ans = happy(1, i + 1) + a[i];
        ans = max(ans, happy(2, i + 1) + b[i]);
        ans = max(ans, happy(3, i + 1) + c[i]);
    }
    else if(p==1){
        ans = max(ans, happy(2, i + 1) + b[i]);
        ans = max(ans, happy(3, i + 1) + c[i]);
    }
    else if(p==2){
        ans = max(ans, happy(1, i + 1)+a[i]);
        ans = max(ans, happy(3, i + 1)+c[i]);
    }
    else if(p==3){
        ans = max(ans, happy(1, i + 1)+a[i]);
        ans = max(ans, happy(2, i + 1)+b[i]);
    }
    return dp[i][p] = ans;
}

void solve(int test) {
    cin>>n;
    memset(dp, -1, sizeof dp);
    for (int i = 0; i < n;i++){
        int x, y, z;
        cin >> x >> y >> z;
        a.push_back(x);
        b.push_back(y);
        c.push_back(z);
        // amra akhane a[n][4] matrix nile aro simle code hoy
        // a[i][0] means = a
        // a[i][1] means = b ...
        // ata korle easyly handel kora jay
    }
    //cout << happy(0, 0) << "\n";

    int dp1[n][4];
    for (int i = n - 1; i > -1;i--){
        if(i==n-1){
            for (int j = 0; j < 3;j++){
                if(j==0){
                    dp1[i][j] = a[i];
                }
                else if(j==1){
                     dp1[i][j] = b[i];
                }
                else{
                    dp1[i][j] = c[i];
                }
            }
        }
        else{
            for (int j = 0; j < 3;j++){
                if(j==0){
                    dp1[i][j] = max(dp1[i+1][1],dp1[i+1][2]) + a[i];
                    //0 ar jonno 1 and 2
                }
                else if(j==1){
                     dp1[i][j] = max(dp1[i+1][0],dp1[i+1][2]) + b[i];
                     // aibarer value tao nite hobe
                }
                else{
                    dp1[i][j] = max(dp1[i+1][1],dp1[i+1][0]) + c[i];
                }
            }
        }
    }
    cout << max(dp1[0][2], max(dp1[0][0], dp1[0][1])) << "\n";
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
