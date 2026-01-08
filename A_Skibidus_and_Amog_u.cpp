#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n;
    string s;
    cin >> s;
    n = s.size();
    for (int i = 0; i < n - 1; i++){
        if(i==n-2 and s[i]=='u' and s[i+1]=='s'){
            cout << 'i' <<"\n";
            break;
        }
        cout << s[i];
    }
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
