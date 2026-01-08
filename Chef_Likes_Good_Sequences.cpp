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
    int n,q;
    cin >> n >> q;
    int a[n];
    cin(a,n);
    int ans = 1;
    for (int i = 0; i < n - 1;i++){
        if(a[i]!=a[i+1]){
            ans++;
        }
    }
    while(q--){
        int p, v;
        cin >> p >> v;
        p--;
        if(p!=0 and a[p]!=a[p-1] and v==a[p-1]){
            ans--;
        }
        if(p!=n-1  and a[p]!=a[p+1] and v==a[p+1]){
            ans--;
        }
        if(p!=0 and a[p]==a[p-1] and v!=a[p-1]){
            ans++;
        }
        if(p!=n-1  and a[p]==a[p+1] and v!=a[p+1]){
            ans++;
        }
        cout << ans << "\n";
        a[p] = v;
    }
}
int main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
