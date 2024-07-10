#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin_array(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO" << nl;
#define yes cout << "YES" << nl;
#define mod 998244353



const int N = 2e5 + 9;
ll a[N];    
int n;
ll mx;

map<pair<int, ll>, int> dp;

int value(int i, ll c) {
    if (i == n) {
        if(c==mx){
            return 1;
        }
        else{
            return 0;
        }
    }
    if (dp.find({i, c}) != dp.end()) {
        return dp[{i, c}];
    }
    ll x = (c + a[i]);
    int ans = value(i + 1, x);
    x = abs(c + a[i]);
    int ans1 = value(i + 1, x);
    return dp[{i, c}] = (ans%mod + ans1%mod)%mod;
}

void solve(int test) {
    cin >> n;
    dp.clear();
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll sum = 0;
    ll x = 0;
    ll y = 0;
    for (int i = 0; i < n; i++) {
        x = x + a[i];
        y = abs(y + a[i]);
        if (abs(x) > y) {
            y = abs(x);
        }
    }
    mx = max(abs(x), y);

    int result = value(0, 0);
    cout << result << "\n";
}

int main() {
    Muku28();
    int test = 1;
    cin >> test;
    for (int i = 1; i <= test; i++) {
        solve(i);
    }
    return 0;
}
