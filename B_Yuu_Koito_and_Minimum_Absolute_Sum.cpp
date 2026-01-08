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
    vector<int> a(n);
    cin(a,n);
    int ans;
    if(a[0] != -1 && a[n-1] != -1){
        ans = abs(a[n-1] - a[0]);
    } 
    else {
        ans = 0;
        if(a[0] == -1 && a[n-1] == -1){
            a[0] = a[n-1] = 0;
        }
        else if(a[0] == -1){
            a[0] = a[n-1];
        }
        else if(a[n-1] == -1){
            a[n-1] = a[0];
        }
    }

    for(int i=0;i<n;i++){
        if(a[i] == -1){
            a[i] = 0;
        } 
    }
    cout << ans << nl;
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << nl;
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
