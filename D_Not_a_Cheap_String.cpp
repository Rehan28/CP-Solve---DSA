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
    int p;
    cin >> p;

    map<char, int> mp;

    int sum = 0;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
        sum += (s[i] - 'a' + 1);
    }

    char c = 'z';
    while(sum > p){
        if(mp[c] > 0){
            sum -= (c - 'a' + 1);
            mp[c]--;
        }
        else{
            c--;
        }
        
    }

    string ans = "";
    for(int i=0;i<n;i++){
        if(mp[s[i]] > 0){
            ans += s[i];
            mp[s[i]]--;
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
