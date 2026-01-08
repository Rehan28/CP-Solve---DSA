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
    int n, k, m;
    cin >> n >> k >> m;

    string w[n];
    for (int i = 0; i < n;i++){
        cin >> w[i];
    }

    map<string, int> mp;
    for (int i = 0; i < n;i++){
        int a;
        cin >> a;
        mp[w[i]] = a;
    }

    int g_val[k + 1];
    map<string, int> g;
    for (int i = 0; i < k;i++){
        int x;
        cin >> x;
        g_val[i] = INT_MAX;
        for (int j = 0; j < x;j++){
            int pos;
            cin >> pos;
            int val = mp[w[pos - 1]];
            g[w[pos - 1]] = i;
            g_val[i] = min(g_val[i], val);
        }
    }

    int ans = 0;
    for (int i = 0; i < m;i++){
        string s;
        cin >> s;
        ans += g_val[g[s]];
    }
    cout << ans << "\n";
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
