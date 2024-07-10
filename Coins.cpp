
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

const int N = 3e3 + 9;
int n;
double dp[N][N];
bool vis[N][N];
double a[N];

double f(int i,int head,int tail){
    if(i==n){
        if(head>tail){
            return 1;
        }
        return 0;
    }
    if(vis[i][head]){
        return dp[i][head];
    }
    double ans = a[i] * f(i + 1, head + 1, tail);
    ans += ((1 - a[i]) * f(i + 1, head, tail + 1));
    vis[i][head] = true;
    return dp[i][head] = ans;
}

void solve(int test) {
    cin>>n;
    for (int i = 0;i<n;i++){
        cin >> a[i];
    }
    // memset(vis, false, sizeof vis);
    cout << fixed << setprecision(10) << f(0, 0, 0) << "\n";
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
