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
int n;
int a[N];
int dp[N][N];

int f(int l,int r){
    if(l==r){
        return 0;
    }
    int &ans = dp[l][r];
    if(ans!=-1){
        return ans;
    }
    ans = mod;
    for (int i = l; i < r;i++){
        int sum = 0;
        for (int j = l; j <= i;j++){
            sum += a[j];
            sum %= 100;
        }
        int sum1 = 0;
        for (int j = i + 1; j <= r;j++){
            sum1 += a[j];
            sum1 %= 100;
        }
        int current_ans = sum * sum1;
        ans = min(ans, current_ans + f(l, i) + f(i + 1, r));
    }
    return ans;
}
void solve(int test) {
    n = test;
    cin(a,n);
    memset(dp, -1, sizeof dp);
    cout << f(0, n - 1) << "\n";
}
int main() {
    Muku28();
    int test;
    //cin>>test;
    while(cin>>test){
        solve(test);
    }
    return 0;
}
