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
    ll n;
    cin>>n;
    int ans = 0;
    while (n>1){
        for (int i = 0; i < 4;i++){
            if(i==3){
                cout << -1 << "\n";
                return;
            }
            ans++;
            if(n%6==0){
                n /= 6;
                break;
            }
            n *= 2;
        }
    }
    cout << ans << "\n";
}
//C programming is very easy to typing
int main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
