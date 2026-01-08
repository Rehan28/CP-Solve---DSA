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
    pfx[0] = 1;

    for (int i = 0; i < n;i++){
        int x = 0;
        if(a[i]>0){
            x = 1;
        }else{
            x = -1;
        }
        pfx[i + 1] = pfx[i] * x;
    }

    map<int, int> mp;
    mp[1]++;
    int ans = 0;
    for (int i = 1; i <= n;i++){
        ans += mp[pfx[i]];
        mp[pfx[i]]++;
    }

    cout <<(n*(n+1))/2 - ans<<" "<< ans << "\n";
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
