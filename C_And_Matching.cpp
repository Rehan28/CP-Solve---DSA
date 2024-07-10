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
    ll n,k;
    cin>>n>>k;
    if(k==n-1){
        if(n==4){
            cout << -1 << "\n";
        }
        else{
            cout << 1 << " " << 3 << "\n";
            cout << n-1 << " " << n-2 << "\n";
            cout << 0 << " " << n - 3 - 1 << "\n";
            for (int i = 2; i <= (n - 2)/2;i++){
                if(i==3){
                    continue;
                }
                cout << i << " " << n - i - 1 << "\n";
            }
        }
        return;
    }

    if(k==0){
        cout << 0 << " " << n - 1 << "\n";
    }
    else{
        cout << k << " " << n - 1 << "\n";
        cout << 0 << " " << n - k-1 << "\n";
    }

    for (int i = 1; i <= (n - 2)/2;i++){
        if(i!=k and (n-i-1)!=k){
            cout << i << " " << n - i - 1 << "\n";
        }
    }
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
