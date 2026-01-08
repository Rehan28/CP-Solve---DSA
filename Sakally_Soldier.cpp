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
    int n;
    cin>>n;
    int x = 0;
    int pre = 1;
    int c = 0;
    while(1){
        x += pre;
        pre++;
        if(x>n){
            break;
        }
        c++;
    }
    cout << n - c << "\n";
}
int32_t main() {
   freopen("alimagde.in", "r", stdin);
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
  