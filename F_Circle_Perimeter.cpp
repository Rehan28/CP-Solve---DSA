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
#define int long long;
const int inf = 1e10;

void solve(int test) {
    int n;
    cin>>n;
    int sum = 0;
    for (int i = n; i > 0;i--){

        int st = 0;
        int end = inf;
        while(st<end){
            
        }

        int hi = i;
        int lo = -1;
        while(lo<hi){
            int mid = lo + (hi - lo + 1) / 2;
            int x = (i * i) + (mid * mid);
            if(x==n*n){
                lo = mid;
            }
            else{
                hi = mid - 1;
            }
        }
        cout << i << " " << lo << "\n";
        if(lo==-1){
            break;
        }
        sum += (lo * 8);
        sum += 4;
    }
    cout << sum << "\n";
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
