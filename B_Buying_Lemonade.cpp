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
    int n,k;
    cin >> n >> k;
    int a[n];
    cin(a,n);
    sort(a, a + n);
    map<int, int> mp;
    for (int i = 0; i < n;i++){
        mp[a[i]]++;
    }
    int taken = 0;
    int ans = 0;
    int y = n;
    for (int i = 0; i < n;i++){
        int x = a[i] - taken;
        if(x>0){
            int s = y;
            int sx = (s * x);
            // dbg(s * x);
            // dbg(k);
            if(sx>=k){
                ans += (y*(k/y));
                k -= (y * (k/y));
                //dbg(k);
                if(k%y){
                    ans += (k);
                }
                k = 0;
                break;
            }
            else{
                ans += (s * x);
                ans += mp[a[i]];
                taken = a[i];
                k -= (s * x);
            }
            //dbg(ans);
            y -= mp[a[i]];
        }
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
