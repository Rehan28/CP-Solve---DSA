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

void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    int b[n];
    for (int i = 0; i < n;i++){
        b[i] = a[i];
    }
    sort(b, b + n);
    for (int i = 0; i < n;i++){
        int mx = b[n - 1];
        int mn = b[0];
        if(mx==a[i]){
            mx = b[n - 2];
        }
        // dbg(i);
        // dbg(mx);
        int val = a[i] - mx;
        cout << val << " ";
    }
    cout << "\n";
}
int main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
