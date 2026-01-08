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
    int a[n];
    cin(a,n);
    int ans = 0;

    if(k==1){
        int x = *max_element(a, a + n);
        if(a[n-1]==x or a[0]==x){
            sort(a, a + n);
            ans = x + a[n - 2];
        }
        else{
            ans = x + max(a[0], a[n - 1]);
        }

        cout << ans << "\n";
        return;
    }

    sort(a, a + n);
    k++;
    for (int i = n - 1; i > -1;i--){
        if(k==0){
            break;
        }
        ans += a[i];
        k--;
        //dbg(k);
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
