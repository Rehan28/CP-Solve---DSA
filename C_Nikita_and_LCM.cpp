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
    sort(a, a + n);
    map<int, int> mp;
    int lc[n];
    lc[0] = a[0];
    mp[a[0]] = 1;
    for (int i = 1; i < n;i++){
        mp[a[i]] = 1;
        lc[i] = (lc[i - 1] * a[i]) / (__gcd(lc[i - 1], a[i]));
    }
    int x = a[n - 1];
    for (int i = n - 1; i > -1;i--){
        dbg(i);
        dbg(lc[i]);
        if(mp[lc[i]]==0){
            cout << i + 1 << "\n";
            return;
        }
        else{
            for (int j = i; j > -1;j--){
                if(a[j]!=a[i]){
                    i = j + 1;
                    break;
                }
            }
        }
    }
    cout << 0 << "\n";
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
