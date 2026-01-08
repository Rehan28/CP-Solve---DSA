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
    map<int, int> mp;
    sort(a, a + n);
    reverse(a, a + n);
    for (int i = 0; i < n;i++){
        mp[a[i]]++;
    }
    int ans = 0;
    for (int i = 0; i < n;i++){
        int x = a[i];
        int last = -1;
        for (int pos = 0; pos < 32;pos++){
            if(x & (1<<pos)){
                last = pos;
            }
        }
        last++;
        int y = (1 << last);
        y = y - x;
        //dbg(y);
        if(y==x){
            mp[x]--;
        }
        
        ans += mp[y];

        if(y!=x){
            mp[x]--;
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
