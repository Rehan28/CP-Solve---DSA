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

    sort(a, a + n);
    cout << (a[n - 1] - a[0]) << " ";

    int x = 0;
    int y = 0;
    for (int i = 0; i < n;i++){
        if(a[i]==a[0]){
            x++;
        }
        if(a[i]==a[n-1]){
            y++;
        }
    }

    if(a[0]==a[n-1]){
        n--;
        cout << (n * (n + 1)) / 2 << "\n";
    }
    else{
        cout << x * y << "\n";
    }
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
