#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n;
    cin>>n;
    string s;
    cin>>s;

    map<char, int> mp;

    for(int i=0; i<n; i++) {
        mp[s[i]]++;
    }

    for(int i=0; i<n; i++) {
        if(i!=0 and i!=n-1 and mp[s[i]] > 1) {
            cout << "Yes" << nl;
            return;
        }
    }
    cout << "No" << nl;

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
