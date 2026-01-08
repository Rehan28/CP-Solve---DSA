#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

void solve(int test) {
    int n; 
    cin >> n;
    int a[n];
    int b[n];
    cin(a,n);
    cin(b,n);

    int sum = 0;
    int sumb = 0;
    for(int i = 0; i < n; i++){
        sum ^= a[i];
    } 
    for(int i = 0; i < n; i++){
        sumb ^= b[i];
    } 

    if(sum == sumb) {
        cout << "Tie\n";
        return;
    }
    int k = -1;
    for(int i = 31; i >= 0; i--) {
        if(((sum>>i)&1)!=((sumb>>i)&1)) {
            k = i;
            break;
        }
    }
    int last = -1;
    for(int i = 0; i < n; i++) {
        if( ((a[i] ^ b[i]) >> k) & 1 ) {
            last = i + 1; 
        }
    }

    if(last % 2 == 1){
        cout << "Ajisai\n";
    } 
    else{
        cout << "Mai\n";
    }
    
}

int32_t main() {
    Muku28();
    int test = 1;
    cin >> test;
    for(int i = 1; i <= test; i++) {
        solve(i);
    }
    return 0;
}
