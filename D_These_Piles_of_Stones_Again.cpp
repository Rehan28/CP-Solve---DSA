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

const int N = 105;
int dp[N][N][N];
void solve(int test) {
    int n1,n2,n3,n;
    cin >> n1 >> n2 >> n3;
    cin>>n;
    int a[n];
    cin(a,n);
    for (int i = 0; i <= n1;i++){
        for (int j = 0; j <= n2;j++){
            for (int k = 0; k <= n3;k++){
                bool f = false;
                for (int l = 0; l < n;l++){
                   if(a[l]<=i){
                       dp[i][j][k] |= !dp[i - a[l]][j][k];
                       //kono akta lossing state a jacchi 
                       //jodi n state theke kono akta wining state a jai then 
                       //peter win korteche.
                   }
                   if(a[l]<=j){
                       dp[i][j][k] |= !dp[i][j - a[l]][k];
                      
                   }
                   if(a[l]<=k){
                       dp[i][j][k] |= !dp[i][j][k - a[l]];
                   }
                }
            }
        }
    }

    if(dp[n1][n2][n3]){
        cout << "Peter\n";
    }
    else{
        cout << "Vasya\n";
    }
}
int main() {
    Muku28();
    int test=1;
   // cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
