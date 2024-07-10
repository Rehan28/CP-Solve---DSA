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

const int N = 2e5 + 1;

ll f[N];
ll pfx[N];
int spf[N];
void val(){
    for (int i = 2; i < N;i++){
        ll x = i-1;
        f[i] = (x * (x + 1)) / 2;
        cout << f[i] << "\n";
    }
}
void PrimeFact(){
    val();
    for (int i = 2; i < N;i++){
        spf[i] = i;
    }
    for (int i = 2; i < N;i++){
        for (int j = i; j < N;j+=i){
            spf[j] = min(spf[j], i);
        }
    }
    for (int i = 2; i < N;i++){
        ll sum = 0;
        int x = i;
        while(spf[x]>1){
            ll p = spf[x];
            ll n = i / p;
            if(i%p==0){
                n--;
            }
            sum += (p * n * (n + 1))/2;
            while(x%p==0){
                x /= p;
            }

        }
        f[i] = f[i] - sum;
        //cout <<i<<" "<< f[i] << "\n";
    }
}
void cal(){
    pfx[1] = 1;
    for (int i = 2; i < N;i++){
        pfx[i] = pfx[i - 1] + f[i];
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
        //solve(i);
    }
    return 0;
}
