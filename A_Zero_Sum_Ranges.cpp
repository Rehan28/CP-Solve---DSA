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

    int pfx[n + 1];
    pfx[0] = 0;

    map<int,int> mp;
    for(int i=1;i<=n;i++){
        pfx[i] = pfx[i - 1] + a[i - 1];
        mp[pfx[i]]++;
    }

    int ans = 0;

    for(auto it:mp){
        if(it.first==0){
            it.second++;
        }
        n = it.second;
        ans += (n*(n-1))/2;
    }
    cout<<ans<<nl;

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
