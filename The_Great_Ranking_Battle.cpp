#include <bits/stdc++.h>
using namespace std;
void muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

struct f {
    vector<int> bit;
    int n;
    f(int sz) {
        n = sz;
        bit.assign(n+1, 0);
    }
    void update(int idx, int val) {
        while(idx <= n) {
            bit[idx] += val;
            idx += idx & -idx;
        }
    }
    int query(int idx) {
        int res = 0;
        while(idx > 0) {
            res += bit[idx];
            idx -= idx & -idx;
        }
        return res;
    }
};

void solve(int test) {
    int n;
    cin >> n;
    vector<int> a(n);
    cin(a,n);
    vector<int> b = a;
    sort(b.begin(), b.end());
    b.erase(unique(b.begin(), b.end()), b.end());
    unordered_map<int,int> mp;
    for(int i = 0; i < b.size(); i++){
        mp[b[i]] = i+1;
    }  
    f ft(b.size());
    vector<int> ans(n);
    for(int i = n-1; i >= 0; i--) {
        int idx = mp[a[i]];
        ans[i] = ft.query(idx-1);
        ft.update(idx, 1);
    }
    for(int i = 0; i < n; i++) {
        cout << ans[i] << (i==n-1 ? nl : " ");
    }
}

int32_t main() {
    muku28();
    int test=1;
    cin >> test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
