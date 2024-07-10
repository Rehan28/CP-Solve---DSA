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
    int n;
    cin>>n;
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < n;i++){
        mp[s[i]]++;
    }
    int ans = 1;
    for (int i = 2; i <= n/2;i++){
        ans *= i;
    }
    bool f = false;
    for(auto it : mp){
        if (it.second % 2 and f == true){
            cout << 0 << "\n";
            return;
        }
        if(it.second%2){
            f = true;
        }
        int val = it.second/2;
        for (int i = 2; i <= val;i++){
            ans /= i;
        }
    }
    cout << ans  << "\n";
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
