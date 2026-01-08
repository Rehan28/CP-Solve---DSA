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
    int a[n];
    cin(a,n);
    int b[n];
    cin(b, n);

    int j = 1;
    map<int, int> mp;
    map<int, int> ans;

    for (int i = 1; i <= n;i++){
        mp[b[j-1]] = j;
        if(mp[a[i-1]]){
            int dis = i - mp[a[i - 1]];
            ans[dis]++;
        }
        j++;
    }

    int y = n + 1;
    for (int i = n+1; i <= 2*n;i++){
        if(mp[a[i-y]]){
            int dis = i - mp[a[i - y]];
            ans[dis]++;
        }
        j++;
    }

    int res = 0;
    for (auto x: ans){
        res = max(res,x.second);
        //dbg(res);
    }

    cout << res << "\n";
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
