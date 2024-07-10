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

const int N = 3e3 + 5;
ll a[N];
int n;
ll dp[N][N];
//double function dia o kaj kora jay
//minus valu aste pare tai dp -1 dile hobe na but akhane hoiteche 
// jodi amon hoy toh vis array use kora jaite pare
ll f(int i,int j,int player){
    if(i==j){
        if(player==1){
            return -a[i];
        }
        else{
            return a[i];
        }
    }
    ll &ans = dp[i][j];
    if(ans!=-1){
        return ans;
    }
    if(player==0){
        ans = f(i + 1, j, 1) + a[i];
        ans = max(ans, f(i, j - 1, 1) + a[j]);
    }
    else{
        ans = f(i + 1, j, 0) - a[i];
        ans = min(ans, f(i, j - 1, 0) - a[j]);
    }
    return ans;
}

void solve(int test) {
    cin>>n;
    cin(a,n);
    memset(dp, -1, sizeof dp);
    cout << f(0, n - 1, 0) << "\n";
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
