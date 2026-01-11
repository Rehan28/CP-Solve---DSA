#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

const int N = 2e3 + 9;
int n, m;
int a[N];
int b[N];
pair<int,int> dp[N][N];

pair<int,int> f(int i,int baki){
    //dbg(i);
    if(baki<0 or i>n){
        return {0,0};
    }
    pair<int,int> &ans = dp[i][baki];
    if(ans.first!=-1 and ans.second!=-1){
        return ans;
    }
    pair<int, int> p = f(i + 1, baki - 1);
    pair<int,int> p1 = f(i + 2, baki - 1);

    if(p.first + a[i] == p1.first + a[i]){
        ans.first = p.first + a[i];
        ans.second = max(p.second + b[i], p1.second + b[i]);
    }
    else if(p.first + a[i] < p1.first + a[i]){
        ans.first = p.first + a[i];
        ans.second = p.second + b[i];
    }
    else{
        ans.first = p1.first + a[i];
        ans.second = p1.second + b[i];
    }
    //cout << ans.first << " " << ans.second << nl;
    return ans;

}


void solve(int test) {
    memset(dp, -1, sizeof dp);
    
    cin >> n >> m;
    a[0] = 0;
    b[0] = 0;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=1;i<=n;i++){
        cin >> b[i];
    }
    cout << f(0,m).first << " " << f(0,m).second << nl;
    
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
