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
    int n,m;
    cin >> n >> m;
    string s[n];
    for (int i = 0; i < n;i++){
        cin >> s[i];
    }
    int ans = 0;
    string s1 = "1543";
    for (int k = 0; k < min(n, m)/2;k++){
        string ss = "";
        int endn = n - k - 1;
        int endm = m - k - 1;
        for (int i = k; i < endm;i++){
            ss += s[k][i];
        }
        for (int i = k; i < endn;i++){
            ss += s[i][endm];
        }
        for (int i = endm; i > k;i--){
            ss += s[endn][i];
        }
        for (int i = endn; i>k ;i--){
            ss += s[i][k];
        }

        ss += ss[0];
        ss += ss[1];
        ss += ss[2];
        for (int i = 0; i+3 < ss.size();i++){
            string s2 = "";
            for (int j = i; j <= i + 3;j++){
                s2 += ss[j];
            }
            if(s2==s1){
                ans++;
            }
        }
    }
    cout << ans << "\n";
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
