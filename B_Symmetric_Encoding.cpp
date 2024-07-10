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
    cin >> n;
    string s;
    cin >> s;
    string r = "";
    map<char, int> mp;
    for (int i = 0; i < n;i++){
        if(mp[s[i]]==0){
            r += s[i];
            mp[s[i]]++;
        }
    }
    sort(r.begin(), r.end());
    string ans = "";
    int x = r.size()-1;
    map<char, int> m;
    for (int i = 0; i < r.size();i++){
        m[r[i]] = i;
    }
    for (int i = 1; i <= n;i++){
        int p = m[s[i-1]];
        int pp = x - p;
        ans += r[pp];
    }
    cout << ans << "\n";
}
int main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
