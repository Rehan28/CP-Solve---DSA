#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n, x;
    cin >> n >> x;
    int a[n];
    cin(a,n);

    int ans = 0;
    int ans1 = 0;
    for (int i = 0; i < n;i++){
        if(a[i]>=x+1){
            ans++;
        }
        else if(a[i]<=x-1){
            ans1++;
        }
    }
    if(ans>=ans1){
        cout << x + 1 << "\n";
    }
    else{
        cout << x - 1 << "\n";
    }
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
