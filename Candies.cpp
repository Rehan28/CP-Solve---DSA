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
const int S = 1e5 + 4;
int a[N];
int n, x;
int dp[N][S];

int way(int i,int val){
    if(i==n){
        if(val==x){
            return 1;
        }
        return 0;
    }
    int &ans = dp[i][val];
    if(ans!=-1){
        return ans;
    }
    ans = 0;
    for (int j = 0; j <= a[i];j++){
        if(val+j<=x){
            ans += (way(i + 1, val + j));
            if(ans>=mod){
                ans -= mod;
            }
        }
    }
    return ans;
}

void solve(int test) {
    cin>>n>>x;
    cin(a,n);
    memset(dp, -1, sizeof dp);
    cout << way(0, 0) << "\n";
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
