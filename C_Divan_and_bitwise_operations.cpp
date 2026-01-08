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

const int N = 2e5 + 9;
int pw[N];
void cal(){
    pw[0] = 1;
    for (int i = 1; i < N;i++){
        pw[i] = (1LL * pw[i - 1] * 2)%mod;
    }
}

void solve(int test) {
    int n,q;
    cin>>n>>q;
    int ans = 0;
    for (int i = 0; i < q;i++){
        int x, y, z;
        cin >> x >> y >> z;
        ans = (ans | z);
    }
    cout << (ans * pw[n-1])%mod << "\n";
}
int32_t main() {
    Muku28();
    int test=1;
    cal();
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
