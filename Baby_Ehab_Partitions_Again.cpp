#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

const int N = 1e2 + 5;
int n;
int a[N];
int sum = 0;
int dp[N][200005];

int f(int i,int s){
    if(i==n){
        return 0;
    }
    if(dp[i][s]!=-1){
        return dp[i][s];
    }
    if(s==(sum-s)){
        return 1;
    }
    int ans = -1;
    ans = max(f(i + 1, s + a[i]), f(i + 1, s));
    return dp[i][s] = ans;
}

void solve(int test) {
    cin>>n;
    cin(a,n);
    memset(dp, -1, sizeof dp);
    for (int i = 0; i < n;i++){
        sum += a[i];
    }

    int ans = f(0, 0);
    if(ans){
        int pos = 33;
        for (int i = 0; i < n;i++){
            int p = 0;
            for (int j = 0; j < 32;j++){
                if((a[i] & (1 << j))){
                    p = j;
                    break;
                }
            }
            if(pos>p){
                pos = p;
                ans = i + 1;
            }
        }
        cout << 1 << "\n";
        cout << ans << "\n";
    }
    else{
        cout << 0 << "\n";
    }
}

int32_t main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
