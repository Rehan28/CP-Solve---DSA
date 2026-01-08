#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n;
    cin>>n;
    int x = 0;
    int a;
    int c;
    int mn = n;
    while(1){
        int val = pow(2, x);
        if(val>n){
            break;
        }
        a = n / val;
        val = n%val;
        c = val;
        val = a + c + x;
        mn = min(val, mn);
        x++;
    }
    cout << mn << "\n";
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
