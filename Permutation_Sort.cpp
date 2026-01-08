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

    int mx = *max_element(a, a + n);
    int mn = *min_element(a, a + n);

    bool is = true;
    for (int i = 0; i < n-1;i++){
        if(a[i]>a[i+1]){
            is = false;
            break;
        }
    }

    if(is){
        cout << 0 << "\n";
    }
    else if(a[0]==mn or a[n-1]==mx){
        cout << 1 << "\n";
    }
    else if(a[0]==mx and a[n-1]==mn){
        cout << 3 << "\n";
    }
    else{
        cout << 2 << "\n";
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
