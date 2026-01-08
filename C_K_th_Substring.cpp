#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;


void solve(int test) {
    string s;
    int k;
    cin>>s >> k;
    int n = s.size();

    map<char, int> mp;
    for(int i=0; i < n; i++) {
        mp[s[i]]++;
    }

    set<string> st;
    for(auto x: mp) {
        for (int i = 0; i < n;i++){
            if(x.first == s[i]) {
                int c = 0;
                string sub = "";
                for (int j = i;j<n;j++){
                    sub += s[j];
                    st.insert(sub);
                    c++;
                    if(c==k){
                        break;
                    }
                }
            }
        }
        // dbg(x.first);
        // for(auto y: st) {
        //     dbg(y);
        // }
        if(st.size() >= k) {
            break;
        }
    }

    for(auto x: st) {
        k--;
        if(k == 0) {
            cout << x << nl;
            return;
        }
    }
    
}
int main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
