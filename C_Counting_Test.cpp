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
    int n,q;
    cin>>n>>q;
    string s;
    cin >> s;
    int pfx[27][n + 1];
    for (char i = 'a'; i <= 'z';i++){
        int x = i - 'a';
        pfx[x][0] = 0;
        for (int j = 1; j <= n;j++){
            if(s[j-1]==i){
                pfx[x][j] = pfx[x][j - 1] + 1;
            }
            else{
                pfx[x][j] = pfx[x][j - 1];
            }
        }
    }
    while(q--){
        int l, r;
        char c;
        cin >> l >> r >> c;
        int y = l % n;
        if(y==0){
            y = n;
        }
        int x = n - y;
        int val = min(r, (l + x));
        int val1 = val;
        val = val % n;
        if(val==0){
            val = n;
        }
        int ans = pfx[c - 'a'][val] - pfx[c - 'a'][y - 1];
        val = r - val1;
        ans += (val / n) * pfx[c - 'a'][n];
        ans += pfx[c - 'a'][val % n];
        cout << ans << "\n";
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
