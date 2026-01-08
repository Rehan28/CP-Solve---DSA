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
    string s;
    cin >> s;
    n = s.size();
    for (int i = 0; i < n - 1;i++){
        if(s[i]==s[i+1]){
            cout << s[i] << s[i + 1] << "\n";
            return;
        }
    }
    for (int i = 0; i < n - 2;i++){
        if(s[i]!=s[i+1] and s[i+1]!=s[i+2] and s[i]!=s[i+2]){
            cout << s[i] << s[i + 1] << s[i + 2] << "\n";
            return;
        }
    }
    cout << -1 << "\n";
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
