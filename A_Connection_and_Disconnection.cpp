#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n, k;
    string s;
    cin >> s >> k;
    string temp = s;
    n = s.size();

    int c = 0;
    for (int i = 1; i < n;i++){
        if(s[i]==s[i-1]){
            s[i] = '@';
            c++;
        }
    }

    int ans = (c*(k/2));
    if(k%2){
        ans += c;
    }
    c = 0;
    if(s[n-1]==s[0]){
        temp[0] = '@';
        c++;
    }

    for (int i = 1; i < n;i++){
        if(temp[i]==temp[i-1]){
            temp[i] = '@';
            c++;
        }
    }

    ans += (c*(k/2));

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
