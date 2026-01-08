#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long
const int mod = 1e9 + 7;


void solve(int test) {
    int n;
    cin>>n;
    string s;
    cin>>s;

    map<char,int> mp;

    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }

    vector<int> v;

    for(auto it:mp){
        v.push_back(it.second);
    }

    n = v.size();
    int ans = 1;
    for (int i = 0; i < n;i++){
        ans *= (v[i] + 1);
        ans %= mod;
    }

    cout<<(ans - 1 + mod)%mod<<nl;
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
