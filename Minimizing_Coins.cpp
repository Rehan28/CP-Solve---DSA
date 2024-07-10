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
const int X = 1e6+5;
const int inf = 1e9;
int n, x;
int a[N];
//int dp[N][X];
int dp[2][X];

int f(int i,int sum){// in this problem this recursive approach give TLE 
    //
    if(sum>x){
        return inf;
    }
    if(x==sum){
        return 0;
    }
    if(i==n){
        return inf;
    }
    int &ans = dp[i][sum];
    if(ans!=-1){
        return ans;
    }
    ans = f(i, sum + a[i]) + 1;
    ans = min(ans, f(i + 1, sum));
    return ans;
}

void solve(int test) {
    cin>>n>>x;
    for (int i = 1; i <= n;i++){
        cin >> a[i];
    }
    //memset(dp, -1, sizeof dp);
    //int ans = f(0, 0);
    dp[0][0] = 0;
    for (int sum = 1; sum <= x;sum++){
        dp[0][sum] = inf;
    }
    // ai approach a AC hobe time aktu kom lage
    // ar 2d or 3d arrayte dp[min][max] amne nibo taile time aktu kom lage

    // atay memory pry 500mb jay 250 amon dile kaj korbena tai optimized kora dorkar
    // for (int i = 1; i <= n;i++){
    //     for (int sum = 0; sum <= x;sum++){
    //         dp[i][sum] = dp[i - 1][sum];//i value ta ami nei nai
    //         if(sum>=a[i]){
    //             dp[i][sum] = min(dp[i][sum], dp[i][sum - a[i]] + 1);
    //             // i value ta nile jeta hobe seta
    //             // nile amra akta coin nitechi
    //         }
    //     }
    // }

    //optimization

    /*obsarvation a dakha jay j akta row last row ar upor kaj korteche tai sudu last row ta
    raklye hoy last row re 0 and current row re 1 dhore korlye hoy
    dp[N][X] theke dp[2][X] hoia jay.
    */
    for (int i = 1; i <= n;i++){
        for (int sum = 0; sum <= x;sum++){
            dp[1][sum] = dp[0][sum];
            if(sum>=a[i]){
                dp[1][sum] = min(dp[1][sum], dp[1][sum - a[i]] + 1);
            }
        }

        for (int sum = 0; sum <= x;sum++){
            dp[0][sum] = dp[1][sum];
        }
    }
    cout << (dp[1][x] == inf ? -1 : dp[1][x]) << "\n";
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
