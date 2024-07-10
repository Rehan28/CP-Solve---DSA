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

void solve(int test) {
    ll a,b,c;
    cin>>a>>b>>c;
    ll ans = -1;
    int x = b % 3;
    if((x==2 and x<=c) or (x==1 and x*2<=c) or (x==0)){
        ll y = b + c;
        ans = a;
        if(y!=0){
            ans += y / 3;
            ll xx = (y % 3);
            if(xx!=0){
                ans++;
            }
        }
    }
    cout << ans << "\n";
}
int main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
