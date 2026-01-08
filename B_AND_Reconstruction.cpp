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
    n--;
    int a[n];
    cin(a,n);

    vector<int> v;
    int x = (1LL * 1 << 3) - 1;
    v.push_back(x);

    for (int i = 0; i < n;i++){
        x = (1LL * 1 << 3) - 1;
        int c = 0;
        for (int j = 3; j>-1;j--){
            if((a[i]&1<<j)==0 and c){
                if(v[i]&1<<j){
                    x = (x & ~(1 << j));
                }
            }
            else if((a[i]&1<<j)){
                c = 1;
            }
        }
        dbg(x);
        v.push_back(x);
    }

    // for (int i = 0; i < n;i++){
    //     int y = v[i] & v[i + 1];
    //     dbg(y);
    // }
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
