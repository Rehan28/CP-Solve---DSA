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

    vector<int> mp(1000007,0);
    vector<int> pm(1000007, 0);
    vector<int> v;
    for (int i = 0; i < n;i++){
        if(mp[a[i]]==0){
            v.push_back(a[i]);
           
        }
        mp[a[i]]++;
    }

    int ans = 0;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size();i++){
        if(mp[v[i]]==1 and pm[v[i]]==0){
            ans++;
        }
        for (int j = v[i]; j <= 1e6+2;j = j+v[i]){
            pm[j] = 1;
        }
    }

    cout << ans << "\n";
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
