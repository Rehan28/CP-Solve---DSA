#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define mod 1000000007
#define int long long

void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    int sum = 0;
    map<int, int> mp;
    int ans = 0;
    int mx = 0;
    
    for (int i = 0; i < n;i++){
        bool f = true;
        if(a[i]==sum){
            f = false;
            ans++;
        }
        sum += a[i];
        mx = max(mx, a[i]);
        if(sum==(2*mx) and f){
            ans++;
        }
    }
        // vector<int> pfx(n+1,0);
        // pfx[0] = a[0];
        // mp[pfx[0]]++;
        // for (int i = 1; i < n;i++){
        //     pfx[i] = pfx[i - 1] + a[i];
        //     mp[pfx[i]]++;
        // }
        // for (int i = 0; i < n;i++){
        //     int x = a[i]+a[i];
        //     if(mp[x]!=0){
        //         auto it = lower_bound(pfx.begin(), pfx.end(), x);
        //         int pos = it - pfx.begin();
        //         if(pos>i){
        //             ans++;
        //         }
        //         else if(i!=0 and pfx[i-1]==a[i]){
        //             ans++;
        //         }
        //     }
        //     if(i==0 and a[i]==0){
        //         ans++;
        //     }

        // }
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
