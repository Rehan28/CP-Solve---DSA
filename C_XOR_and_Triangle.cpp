#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

map<int, int> mp;

void f(){
    int x = 1;
    for (int i = 1; i <= 32;i++){
        x *= 2;
        mp[x] = 1;
        mp[x - 1] = 1;
    }
}

void solve(int test) {
    int n;
    cin>>n;
    if(mp[n]==1){
        cout << -1 << "\n";
        return;
    }

    
    int l = n & -n;
    int h = 1;
    while (n & h) {
        h <<= 1;
    }

    int ans = l + h;
    cout << ans << "\n";
}
int32_t main() {
    Muku28();
    int test=1;
    cin>>test;
   
    f();
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
