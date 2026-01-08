#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

const int N = 1e6+5;
const int mod = 1e9+7;

int fact[N];
int invfact[N];

int power(long long n, long long k) {//modular exponentiation inverse modulo
  int ans = 1 % mod; n %= mod; if (n < 0) n += mod;
  while (k) {
    if (k & 1) ans = (long long) ans * n % mod;
    n = (long long) n * n % mod;
    k >>= 1;
  }
  return ans;
}

void invfactCal(){
    invfact[N-1] = power(fact[N-1],mod-2);//atar jonno nlogn theke n hoy.
    for(int i=N-2;i>=0;i--){
        invfact[i] = (invfact[i + 1] * (i + 1)) % mod; // 1/(n-r)! = r * 1/r!;
    }
}

void factCal(){
    for(int i=0;i<N;i++){
        if(i==0) fact[i]=1;
        else fact[i] = (fact[i-1]*i)%mod;
    }
}

int nCr(int n,int r){
    if(n<r or n<0) return 0;
    return (1LL * fact[n] * invfact[r] % mod * invfact[n - r]) % mod;
}

int nPr(int n,int r){
    if(n<r or n<0) return 0;
    return (1LL * fact[n] * invfact[n - r]) % mod;
}

void solve(int test) {
    factCal();
    invfactCal();
    cout<<nCr(6,2)<<nl;
    cout<<nPr(6,2)<<nl;
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
