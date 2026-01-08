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
        if(a[i]>=k){
            break;
        }
        mp[a[i]]++;
    }

    int ans = 0;
    int dot = 0;
    int cop = 0;

    for (int i = 0; i < n;i++){
        if(a[i]>=k){
            break;
        }
        int x = k - a[i];
        mp[a[i]]--;
        if(mp[x]>0){
            ans++;
            mp[x]--;
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
