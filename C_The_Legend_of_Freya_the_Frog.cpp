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
#define int long long

void solve(int test) {
    int x, y, k;
    cin >> x >> y >> k;
    if(x>=y){
        int xx = x / k;
        if(x%k){
            xx++;
        }
        cout << (xx * 2) - 1 << "\n";
    }
    else{ 
        int xx = y / k;
        if(y%k){
            xx++;
        }
        cout << (xx * 2) << "\n";
    }
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
