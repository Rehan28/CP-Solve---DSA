#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n, m;
    cin >> n >> m;

    map<int, int> mp;
    vector<int> v[n];
    set<int> s;

    int full = 0;
    for (int i = 0; i < n;i++){
        int x;
        cin >> x;
        set<int> st;
        for (int j = 0; j < x;j++){
            int y;
            cin >> y;
            st.insert(y);
            mp[y]++;
            v[i].push_back(y);
            s.insert(y);
        }
        if(st.size()==m){
           full++;
        }
    }

    if(full>=2){
        cout<<"YES\n";
        return;
    }
    if(s.size()<m){
        cout<<"NO\n";
        return;
    }

    set<int> ans;
    map<int, int> c;
    for (int i = 0; i < n;i++){
        for (int j = 0;j<v[i].size();j++){
            if(mp[v[i][j]]==1){
               ans.insert(v[i][j]);
                c[i]++;
            }
        }
    }

    int tot = 0;

    if(ans.size()==m){
        tot++;
    }
    for (int i = 0; i < n;i++){
        if(c[i]==1) continue;
        set<int> st1;
        for(auto x : ans){
            st1.insert(x);
        }
        for (int j = 0;j<v[i].size();j++){
           st1.insert(v[i][j]);
        }
        if(st1.size()==m){
            tot++;
        }
        if(tot==2){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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
