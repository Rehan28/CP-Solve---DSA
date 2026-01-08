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
    int sum = 0;

    for (int i = 0; i < n;i++){
        sum += a[i];
    }

    if(sum!=0){
        cout << "YES\n";
        cout << 1 << "\n";
        cout << 1 << " " << n<< "\n";
        cout << "\n";
    }
    else{
        sum = 0;
        for (int i = 0; i < n;i++){
            sum += a[i];
            if(sum!=0){
                cout << "YES\n";
                cout << 2 << "\n";
                cout << 1 << " " << i + 1 << "\n";
                cout << i+2 << " " << n << "\n";
                cout << "\n";
                return;
            }
        }
        cout << "NO\n";
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
