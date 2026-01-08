#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n;
    cin>>n;
    string s;
    cin >> s;

    map<char, int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }

    int l = INT_MAX;
    char c;
    for(auto x:mp){
        if(x.second<l){
            l = x.second;
            c = x.first;
        }
    }

    int h = 0;
    char c1;
    for(auto x:mp){
        if(x.second>=h){
            h = x.second;
            c1 = x.first;
        }
    }

    int x = 0;
    for(int i=0;i<n;i++){
        if(s[i]==c){
            x = i;
            break;
        }
    }

    int x1 = 0;
    for(int i=n-1;i>-1;i--){
        if(s[i]==c1){
            x1 = i;
            break;
        }
    }
    // dbg(c);
    // dbg(c1);
    // dbg(x);
    // dbg(x1);
    s[x] = s[x1];
    cout << s << "\n";
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
