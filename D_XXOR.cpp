#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n, k;
    cin >> n >> k;
    int a[n];
    cin(a, n);

    int o = 1;
    int val = 0;
    int c = 0;
    for (int pos = 42; pos >= 0;pos--){
        if(k&(o<<pos)){
            int one = 0;
            int zero = 0;
            for (int i = 0; i < n;i++){
                if(a[i] & (o<<pos)){
                    one++;
                }
                else{
                    zero++;
                }
            }
            if(zero>one){
                val = val | (o << pos);
            }
            else{
                c = 1;
            }
        }
        else if(c){
            int one = 0;
            int zero = 0;
            for (int i = 0; i < n;i++){
                if(a[i] & (o<<pos)){
                    one++;
                }
                else{
                    zero++;
                }
            }
            if(zero>one){
                val = val | (o << pos);
            }
        }
    }
    
    int ans = 0;
    for (int i = 0; i < n;i++){
        ans += (a[i] ^ val);
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
