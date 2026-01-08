#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define int long long
#define mod 1000000007

void solve(int test) {
    int n,k;
    cin >> n >> k;
    if(n==1){
        cout << 1 << "\n";
        cout << 1 << "\n";
    }
    else if(k==1 or k==n){
        cout << -1 << "\n";
    }
    else{
        cout << 3 << "\n";
        int x = n - k;
        if(x%2){
            cout << 1 << " " << k << " " << k + 1 << "\n";
        }
        else{
            cout << 1 << " " << k-1 << " " << k + 2 << "\n";
        }
        
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
