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

const int N = 2e6 + 9;

ll f[N];
ll pfx[N];
void PrimeFact(){
    for (int i = 1; i < N;i++){
        f[i] = i;
    }
    for (int i = 2; i < N;i++){
        if(f[i]==i){
            for (int j = i; j < N;j = j+i){
                f[j] -= (f[j] / i);
            }
        }
    }
}
void cal(){
    pfx[1] = 1;
    for (int i = 2; i < N;i++){
        pfx[i] = pfx[i - 1] + (f[i]*i)/2;
    }
}
void solve(int test) {
    ll l,r;
    cin>>l>>r;
    cout << pfx[r] - pfx[l - 1] << "\n";
}
int main() {
    Muku28();
    int test=1;
    cin>>test;
    PrimeFact();
    cal();
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}