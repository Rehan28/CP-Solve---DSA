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
#define int long long

void solve(int test) {
    int n,k;
    cin >> n >> k;
    int a[n];
    cin(a,n);
    int sum = 0;

    int pfx[n + 1];
    pfx[0] = 0;
    for (int i = 1; i <= n;i++){
        pfx[i] = pfx[i - 1] + a[i - 1];
    }
    int week = 0;
    for (int i = 1; i + k - 1 <= n;i++){
        int x = pfx[i + k - 1] - pfx[i - 1];
        sum += x;
        week++;
    }
    //dbg(sum);
    double ans = (double)sum / week;
    cout <<setprecision(15)<< ans << "\n";
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
