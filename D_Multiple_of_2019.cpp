#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    string s;
    cin >> s;

    int n = s.size();
    map<int, int> mp;
    mp[0] = 1;
    reverse(s.begin(), s.end());

    int total = 0;
    int ten = 1;
    int num = 0;
    for (int i = 0; i < n;i++){
        num += (s[i] - '0') * ten;
        num %= 2019;
        total += mp[num];
        mp[num]++;
        ten = (ten * 10) % 2019;
    }

    cout << total << "\n";
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
