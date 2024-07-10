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

const int inf = 1e9 + 9;
const int N = 1e6 + 9;
int dp[N];

int way(int n){
    if(n==0){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    string s = to_string(n);
    int x = s.size();
    int ans = inf;
    for (int i = 0; i < x;i++){
        int y = s[i] - '0';
        if(y!=0){// 0 minus korle toh same e thakbe
           ans = min(ans, way(n - y)+1);
        }
    }
    return dp[n] = ans;
}

void solve(int test) {
    int n;
    cin >> n;
    // memset(dp, -1, sizeof dp);
    // cout << way(n) << "\n";

    //it
    int dp1[n + 1];
    dp1[0] = 0;// no need of any operation
    for (int i = 1; i <= n;i++){
        string s = to_string(i);
        int x = s.size();
        dp1[i] = inf;
        for (int j = 0; j < x;j++){
            int y = s[j] - '0';//digit and here i is our number
            if(y!=0){// 0 minus korle toh same e thakbe
                dp1[i] = min(dp1[i], dp1[i-y]+1);
            }
        }
    }
    cout << dp1[n]  << "\n";
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
