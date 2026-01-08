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

void solve(int test) {
    string s;
    cin >> s;
    int n = s.size();
    map<char, int> mp;
    char c = 'A';
    for (int i = 0; i < n;i++){
        mp[s[i]] = i + 1;
    }
    int last = mp[c];
    int ans = 0;
    for (int i = 0; i < 25;i++){
        c++;
        int now = mp[c];
        //dbg(now);
        ans += abs(last - now);
        last = now;
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
