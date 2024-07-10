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

const int N = 1005;
int n, m;
string s[N];
int dp[N][N];

int number_of_path(int i,int j){
    if(i>=n or j>=m){
        return 0;
    }
    if(i==n-1 and j==m-1){
        return 1;
    }
    if(s[i][j]=='#'){
        return 0;
    }
    int &ans = dp[i][j];
    if(ans!=-1){
        return ans;
    }
    ans = number_of_path(i + 1, j)%mod;
    ans += number_of_path(i, j+1)%mod;
    return ans%mod;
}

void solve(int test) {
    memset(dp,-1,sizeof dp);
    cin >> n >> m;
    for (int i = 0; i < n;i++){
        cin >> s[i];
    }
    cout << number_of_path(0, 0) << "\n";
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
