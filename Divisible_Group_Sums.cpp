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

const int N = 205,M = 25,D = 25;
int n;
int a[N];
int q, d, m;
ll dp[N][M][D];
//(10*1e9)


ll way(int i,int num_taken,int sum){
    // sum mane mod of d
    if(num_taken>m){
        return 0;
        // operation komaia dey
    }
    if(i==n){
        if(sum ==0 and num_taken==m){
            return 1;
        }
        return 0;
    }
    ll &ans = dp[i][num_taken][sum]; 
    if(ans != -1){
        return ans;
    }
    ans = way(i + 1, num_taken, sum);
    ans += way(i + 1, num_taken + 1, (sum + (a[i] % d + d) % d) % d);
    // mod korle amra range ta komaite pari
    return ans;
}


void solve(int test) {
    cout << "Case " << test << ":\n";
    cin>>n>>q;
    cin(a,n);
    for (int i = 0; i < q;i++){
        memset(dp, -1, sizeof dp);//protibar lagbe karon different d,m
        cin >> d >> m;
        cout << way(0, 0, 0) << "\n";
    }
}
int main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
