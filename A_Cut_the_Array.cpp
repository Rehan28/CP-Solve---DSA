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

    int sumi = 0;
    for (int i = 0; i < n - 2;i++){
        sumi += a[i];
        int sumj = 0;
        for (int j = i + 1; j < n - 1;j++){
            sumj += a[j];
            int x = sumi % 3;
            int y = sumj % 3;
            int z = ((sum) - (sumi + sumj)) % 3;
            if(x==y and x==z and y==z){
                cout << i + 1 << " " << j + 1 << "\n";
                return;
            }
            if(x!=y and x!=z and y!=z){
                cout << i + 1 << " " << j + 1 << "\n";
                return;
            }
        }
    }

    cout << 0 <<" "<<0 << "\n";
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
