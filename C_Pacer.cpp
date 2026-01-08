#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n, m;
    cin >> n >> m;

    int c = 0;
    int last = 0;

    int ans = 0;
    for (int i = 0; i < n;i++){
        int x, y;
        cin >> x >> y;
      
        if(y==c){
            int gap = x - last;
            last = x;
            if(gap%2){
                ans += (gap - 1);
            }
            else{
                ans += gap;
            }
        }
        else{
            int gap = x - last;
            last = x;
            if(gap%2==0){
                ans += (gap - 1);
            }
            else{
                ans += gap;
            }
            c = y;
        }
    }
    
    ans += (m - last);
    cout << ans << '\n';
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
