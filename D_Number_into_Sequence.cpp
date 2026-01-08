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
    vector<int> v;
    int ans = 0;
    int val = n;
    for (int i = 2; i <= sqrt(n) + 1;i++){
        int x = n;
        int c = 0;
        while (x%i==0 and (x/i)%i==0){
            x /= i;
            c++;
        }
        if(ans<c){
            ans = c;
            val = i;
        }
    }
    cout << ans + 1 << "\n";
    while (ans--){
        cout << val << " ";
        n /= val;
    }
    if(n!=1){
        cout << n << " ";
    }
    cout << "\n";
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
