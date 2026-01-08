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
    int x,m;
    cin >> x >> m;
    int ans = 0;
    for (int i = 1; i<x and i<=m;i++){
        int val = x ^ i;
        if((val%i==0)){
            ans++;
        }
    }
    int add = (m - x) / x;
    ans += add;
    int st = m - x + 1;
    if(m<x){
        st = m + 1;
    }
    for (int i = st; i <= m;i++){
        int val = x ^ i;
        if((val%x==0)){
            ans++;
        }
    }
    cout << ans << "\n";

    //x and m deoa ache y = 1<=m 1 xor x % y 
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
