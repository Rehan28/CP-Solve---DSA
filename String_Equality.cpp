#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

void solve(int test) {
    int n, k;
    cin >> n >> k;

    string s1, s2;
    cin >> s1 >> s2;

    map<int, int> mp;
    map<int, int> mp1;
    for (int i = 0; i < n;i++){
        mp[s1[i] - 'a' + 1]++;
        mp1[s2[i] - 'a' + 1]++;
    }

    for (int i = 1; i <= 26;i++){
        if(mp[i]<mp1[i] or (mp[i]-=mp1[i])%k){
            cout << "NO\n";
            return;
        }
        mp[i+1] += mp[i];
    }
    cout << "YES\n";
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
