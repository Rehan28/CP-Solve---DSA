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

    int b[n];

    for (int i = 0; i < n;i++){
        b[i] = 0;
    }

    for (int i = 0; i < 31;i++){
        int one = 0;
        int zero = 0;
        for (int j = 0; j < n; j++){
            if(a[j] & (1 << i)){
                one++;
            }
            else{
                zero++;
            }
        }

        for (int j = 0; j < n;j++){
            int x = 1 << i;
            if(a[j] & (1 << i)){
                b[j] += zero * x;
            }
            else{
                b[j] += one * x;
            }
        }
    }

    sort(b, b + n);
    cout << b[n - 1] << "\n";
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
