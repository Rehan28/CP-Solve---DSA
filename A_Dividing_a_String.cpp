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

    int ans = 1;
    string last = "";
    last += s[0];
    for (int i = 1; i < n;i++){
        string now = "";
        now += s[i];
        if(now==last){
            if(i==n-1){
                break;
            }
            now += s[i + 1];
            i++;
        }
        ans++;
        last = now;
    }

    cout<<ans<<nl;
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
