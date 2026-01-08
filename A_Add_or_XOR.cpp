#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int a, b, x, y;
    cin>>a>>b>>x>>y;

    int ans = 0;

    while(1){
        if(a==b){
            break;
        }
        else if(a<b){
            int t = a ^ 1; 
            a++;
            if(x>y and t==a){
                ans += y;
            }
            else{
                ans += x;
            }
        }
        else{
            a = a ^ 1;
            if(a>b){
                cout<<-1<<nl;
                return;
            }
            else{
                ans += y;
            }
        }
    }

    cout<<ans<<nl;
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
