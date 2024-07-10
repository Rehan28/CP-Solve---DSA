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
    ll n,m;
    cin>>n>>m;
    ll x = n + m;
    ll y = n - 1;
   
    int pos = 31;
    for (int i = 31; i > -1;i--){
        if((n-1) & (1<<i)){
            pos = i;
            break;
        }
    }
    int pos1 = 31;
    for (int i = 31; i > -1;i--){
        if(x & (1<<i)){
            pos1 = i;
            break;
        }
    }
    if(pos==pos1){
        ll rehan = (n ^ x+1);
        rehan = rehan | (x+1);
        cout << rehan << "\n";
    }
    else{
        ll ans = 0;
        for (int i = 0; i <= pos1;i++){
            ans = (ans | (1 << i));
        }
        cout << ans << "\n";
    }
    
   
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
