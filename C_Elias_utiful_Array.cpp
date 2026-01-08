#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define int long long
#define mod 1000000007

void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    map<int, int> mp;
    for (int i = 0; i < n;i++){
        int last = 0;
        for (int j = 0; j <= 30;j++){
            if(a[i] & (1 << j)){
                last = j;
            }
        }
        mp[last]++;
    }
    int ans = 0;
    for(auto x : mp){
        ans = max(ans, x.second);
        //dbg(ans);
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
