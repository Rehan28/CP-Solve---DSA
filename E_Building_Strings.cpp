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

void solve(int test) {
    int n,m;
    cin >> n>>m;
    string s, c, p;
    cin >> s >> c >> p;
    map<char, int> mp;
    for (char i = 'a'; i <= 'z';i++){
        mp[i] = mod;
    }
    for (int i = 0; i < n;i++){
        int x = c[i] - '0';
        mp[s[i]] = min(mp[s[i]], x);
    }
    int ans = 0;
    for (int i = 0; i < m;i++){
        if(mp[p[i]]==mod){
            cout << -1 << "\n";
            return;
        }
        ans += mp[p[i]];
    }
    cout << ans << "\n";
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
