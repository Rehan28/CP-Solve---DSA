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
    int n;
    string s;
    cin >> s;
    int m;
    cin >> m;
    n = s.size();
    while(m--){
        int l, r, k;
        cin >> l >> r >> k;
        string s1 = "";
        for (int i = l - 1; i < r;i++){
            s1 += s[i];
        }
        int nn = s1.size();
        char c[nn];
        for (int i = 0; i < nn;i++){
            int x = (i + k) % nn;
            c[x] = s1[i];
        }
        string new_s = "";
        for (int i = 0; i < l - 1;i++){
            new_s += s[i];
        }
        for (int i = 0; i < nn;i++){
            new_s += c[i];
        }
        for (int i = r; i < n;i++){
            new_s += s[i];
        }
        s = new_s;
    }
    cout << s << "\n"; 
}
int main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
