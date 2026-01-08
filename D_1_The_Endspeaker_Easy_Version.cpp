#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define int long long
#define mod 1000000007

const int N = 3e5 + 9;
const int inf = LLONG_MAX;
int a[N], b[N];
int n, m;
vector < vector<int>> dp;
vector<int> pfx;

int cost(int i,int k){
    dbg(i);
    dbg(k);
    if (i == n){
        return 0;
    } 
    if (k >= m){
        return inf;  
    } 
    if (dp[i][k] != -1){
        return dp[i][k];
    }   
    int ans = cost(i, k + 1);
    // int p = 0;
    // for (int j = i; j < n; j++) {
    //     p += a[j];
    //     if (p > b[k]){
    //         break;
    //     } 
    //     int c1 = cost(j + 1, k);
    //     if (c1!=inf) {
    //         ans = min(ans, c1 + (m - k - 1));
    //     }
    // }


    if(a[i]<=b[k]){
        int c = pfx[i] + b[k];
        int pos = upper_bound(pfx.begin(),pfx.end(),c) - pfx.begin() - 1;      
        if(pos>i){
            ans = min(ans, cost(pos, k) + k);
        }
    }
    dp[i][k] = ans;
    return dp[i][k];
}

void solve(int test) {
    cin>>n>>m;
    for (int i = 0;i<n;i++){
        cin >> a[i];
    }
    for (int i = 0;i<m;i++){
        cin >> b[i];
    }
    reverse(a, a + n);
    reverse(b, b + m);
    pfx.push_back(a[0]);
    for (int i = 1; i < n;i++){
        pfx.push_back(pfx.back()+a[i]);
    }
    dp.assign(n+1, vector<int>(m+1, -1));
    int ans = cost(0, 0);
    if(ans==inf){
        cout << -1 << "\n";
    }
    else{
        cout << ans << "\n";
    }
    pfx.clear();
}
int32_t main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
