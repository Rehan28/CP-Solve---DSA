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
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    int odd = 0;
    int ans = 0;
    int minodd = INT_MAX;
    int maxodd = -1e5;
    for (int i = 0; i < n;i++){
        if(a[i]>0){
            ans += a[i];
            if(a[i]%2){
                odd++;
                minodd = min(minodd, a[i]);
            }
        }
        else if(a[i]%2){
            maxodd = max(maxodd, a[i]);
        }
    }
    if(odd==0){
        ans += maxodd;
    }
    else if(odd%2==0){
        int x = min(abs(maxodd), minodd);
        ans -= x;
    }
    cout << ans << "\n";
}
int main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
