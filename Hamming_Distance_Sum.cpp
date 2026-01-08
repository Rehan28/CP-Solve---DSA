#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n;
    string s, st;
    cin >> s >> st;

    n = s.size();
    int m = st.size();

    int one[m + 2];
    int zero[m + 2];

    one[0] = 0;
    zero[0] = 0;
    for (int i = 1; i <= m;i++){
        if(st[i-1]=='1'){
            one[i] = one[i - 1] + 1;
            zero[i] = zero[i-1];
        }
        else{
            zero[i] = zero[i - 1] + 1;
            one[i] = one[i - 1];
        }
    }

    int ans = 0;
    for (int i = 0; i < n;i++){
        int x = n - i;
        if(s[i]=='1'){
            ans += (zero[m-x+1] - zero[i]);
        }
        else{
            ans += (one[m-x+1] - one[i]);
        }
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
