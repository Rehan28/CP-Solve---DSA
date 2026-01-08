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
    int n;
    cin>>n;
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < n;i++){
        mp[s[i]]++;
    }
    int mn = INT_MAX;
    mn = min(mn, mp['L']);
    mn = min(mn, mp['R']);
    int mn1 = INT_MAX;
    mn1 = min(mn1, mp['U']);
    mn1 = min(mn1, mp['D']);
    cout << (mn * 2) + (mn1*2) << "\n";
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
