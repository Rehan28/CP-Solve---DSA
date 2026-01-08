#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n, k;
    cin >> n >> k;

    int x = k;

    if(n%2 and k%2==0){
        k--;
    }
    else if(n%2==0 and k%2){
        k--;
    }

    int ans = 0;

    if(n%2 and k%2){
        ans++;
        n -= k;
        if(x%2==0 and x>k){
            k = x;
        }
        else{
            k--;
        }
    }

    ans += (n / k);

    if(n%k){
        ans++;
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
