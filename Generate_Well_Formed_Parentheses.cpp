#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

void f(int i, int j, string s, int n) {
    if (s.size() == 2 * n) {
        cout << s << "\n";
        return;
    }
    if (i < n) {                  
        s.push_back('(');
        f(i + 1, j, s, n);
        s.pop_back();
    }
    if (j < i) {              
        s.push_back(')');
        f(i, j + 1, s, n);
        s.pop_back();
    }
}
void solve(int test) {
    int n;
    cin>>n;
    string s;
    cin >> s;
    f(0, 0, s, n);
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
