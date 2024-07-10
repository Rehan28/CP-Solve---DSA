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

const int N = 1002;
int n;
string s;
int dp[N][N];

int length(int i,int j){
    if(i>j){
        return 0;
    }
    if(i==j){
        return 1;
    }
    int &ans = dp[i][j];
    if(ans!=-1){
        return ans;
    }
    if(s[i]==s[j]){
        ans = length(i + 1, j - 1) + 2;
    }
    else{
        ans = max(length(i + 1, j), length(i, j - 1));
    }
    return ans;
}

void solve(int test) {
    getline(cin,s);//ata protita line input hisebe ney
    // ai problem a 0 size ar string o aste pare tai getlin dia input nitechi
    n = s.size();
    // memset(dp, -1, sizeof dp);
    // cout << length(0, n - 1) << "\n";

    memset(dp, 0, sizeof dp);
    for (int len = 1; len <= n;len++){
        for (int i = 0; i+len-1 < n;i++){
            int j = i + len - 1;// len size ar substr  
            int &ans = dp[i][j];
            if(i==j){
                ans = 1;
            }
            else if(s[i]==s[j]){
                ans = dp[i + 1][j - 1] + 2;//that means choto size ar dp gula
            }
            else{
                ans = max(dp[i + 1][j], dp[i][j - 1]);
                //same
            }
        }
    }
    cout << dp[0][n - 1] << "\n";
}
int main() {
    Muku28();
    int test=1;
    cin>>test;
    cin.ignore();
    // prothome test neoear por oi line a e getline nite caibe tai next liine a neoar jonno 
    // cin.ignore() use kora hoice
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
