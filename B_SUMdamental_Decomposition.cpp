#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n, k;
    cin >> n >> k;

    if(n%2==0 and k==0){
        cout << n << "\n";
    }
    else if(n%2 and k==0){
        if(n==1){
            cout << -1 << "\n";
        }
        else{
            cout << 5 + (n - 2) << "\n";
        }
    }
    else if(k!=1){
        int sum = k;
        int c = 0;
        for (int i = 0; i < 32;i++){
            if(k & (1LL<<i)){
                c++;
            }
        }
        n -= c;
        if(n>0){
            sum += n;
            if(n%2){
                sum++;
            }
        } 
        cout << sum << "\n"; 
    }
    else{
        if(n%2){
            cout << n << "\n";
        }
        else{
            cout << 5 + (n - 2) << "\n";
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
