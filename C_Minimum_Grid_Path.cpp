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
    int a[n];
    cin(a,n);
    int pfx_odd[n];
    int odd_min[n];
    pfx_odd[0] = a[0];
    odd_min[0] = a[0];
    for (int i = 1; i < n;i++){
        if(i%2==0){
            pfx_odd[i] = pfx_odd[i - 1] + a[i];
            odd_min[i] = min(odd_min[i - 1], a[i]);
        }
        else{
            pfx_odd[i] = pfx_odd[i - 1];
            odd_min[i] = odd_min[i - 1];
        }
    }
    int pfx_even[n];
    int even_min[n];
    pfx_even[1] = a[1];
    even_min[1] = a[1];
    for (int i = 2; i < n;i++){
        if(i%2){
            pfx_even[i] = pfx_even[i - 1] + a[i];
            even_min[i] = min(even_min[i - 1], a[i]);
        }
        else{
            pfx_even[i] = pfx_even[i - 1];
            even_min[i] = even_min[i - 1];
        }
    }
    int ans = LONG_LONG_MAX;
    for (int i = 1; i < n;i++){
        int sum = 0;
        int p = i;
        if(p%2){
            int x = p / 2;
            sum += pfx_even[p];
            sum -= even_min[p];
            sum += (even_min[p] * (n-x));
        }
        else{
            int x = p / 2;
            sum += pfx_odd[p];
            sum -= odd_min[p];
            sum += (odd_min[p] * (n-x));
        }
        p = i - 1;
        if(p%2){
            int x = p / 2;
            sum += pfx_even[p];
            sum -= even_min[p];
            sum += (even_min[p] * (n-x));
        }
        else{
            int x = p / 2;
            sum += pfx_odd[p];
            sum -= odd_min[p];
            sum += (odd_min[p] * (n-x));
        }
        ans = min(ans, sum);
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
