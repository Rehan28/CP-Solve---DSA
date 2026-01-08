#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define mod 1000000007
#define int long long

void solve(int test) {
    int n, k;
    cin >> n >> k;
    int a[n];
    cin(a, n);
    int b[n];
    cin(b, n);
    int comp[n + 1] = {0};
    for (int i = 0; i < n;i++){
        comp[abs(b[i])] += a[i];
    }
    int avail = 0;
    for (int i = 1; i <=n;i++){
        avail += k;
        avail -= comp[i];
        if(avail<0){
            no;
            return;
        }
    }
    yes;
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
