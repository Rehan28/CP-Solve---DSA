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
    int a[n];
    cin(a,n);

    map<int, int> mp;
    for (int i = 0; i < n;i++){
        mp[a[i]]++;
    }

    for(auto x : mp){
        if(x.second<k or x.second%k!=0){
            cout << 0 << "\n";
            return;
        }
    }

    int ans = 0;
    int l = 0;
    int last = 0;
    map<int, int> pm;
    for (int i = 0; i < n;i++){
        int val = mp[a[i]] / k;
        pm[a[i]]++;
        if(pm[a[i]]>val){
            for (; last < i;last++){
                pm[a[last]]--;
                if(pm[a[i]]<=val){
                    last++;
                    break;
                }
            }
        }
        int total = i - last + 1;
        ans += total;
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
