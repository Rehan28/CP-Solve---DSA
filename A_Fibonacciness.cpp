#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define int long long
#define mod 1000000007

void solve(int test) {
    int n;
    n = 4;
    int a[n];
    cin(a,n);
    int ans = 1;
    for (int i = -1000; i <= 1000;i++){
        int c = 0;
        if(a[0]+a[1]==i){
            c++;
        }
        if(a[1]+i==a[2]){
            c++;
        }
        if(i+a[2]==a[3]){
            c++;
        }
        //dbg(c);
        ans = max(ans, c);
    }
    cout << ans << "\n";
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
