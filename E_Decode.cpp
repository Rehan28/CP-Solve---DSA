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
    int n;
    string s;
    cin >> s;
    n = s.size();
    int pfx[n + 1] = {0};
    for (int i = 1;i<=n;i++){
        if(s[i-1]=='1'){
            pfx[i] = pfx[i - 1] + 1;
        }
        else{
            pfx[i] = pfx[i - 1] - 1;
        }
        //dbg(pfx[i]);
    }
    map<int, int> val;
    for (int i = 1; i <= n;i++){
        int x = n - i + 1;
        val[pfx[i]] += x;
    }
    int x = 0;
    int ans = val[x];
    //dbg(ans);
    for (int i = 1; i <= n;i++){
        if(s[i-1]=='1'){
            x++;
        }
        else{
            x--;
        }
        val[x] -= (n - i + 1);
        ans += (val[x]*(i+1)) % mod;
        ans %= mod;
    }
    cout << ans%mod << "\n";
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
