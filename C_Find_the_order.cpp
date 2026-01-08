#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);

    sort(a, a + n,greater<>());

    int ans[n + 1];

    int c = 0;

    for (int i = 1; i < n;i = i+2){
        ans[i] = a[c];
        c++;
    }
    
    for (int i = 0; i < n;i = i+2){
        ans[i] = a[c];
        c++;
    }

   

    for (int i = 0; i < n;i++){
        if(i%2){
            if(ans[i]<=ans[i-1]){
                cout << -1 << "\n";
                return;
            }
        }
        else if(i!=0){
            if(ans[i]>=ans[i-1]){
                cout << -1 << "\n";
                return;
            }
        }
    }

    for (int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    cout << "\n";
}
int32_t main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
