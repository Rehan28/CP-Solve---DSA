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
    map<char, int> mp;

    for (int i = 0; i < n;i++){
        mp[s[i]]++;
    }

    for(auto x : mp){
        int num = x.second;
        char c = x.first;
        if(c!='z'){
            c++;
            mp[c] += (num / 2);
            if(num%2){
                mp[x.first] = 1;
            }
            else{
                mp[x.first] = 0;
            }
        }
    }

    for (char c = 'z'; c >= 'a';c--){
        for (int i = 0; i < mp[c];i++){
            cout << c;
        }
    }
    cout << "\n";
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
