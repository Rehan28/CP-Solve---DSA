#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin_arr(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define int long long

const int MOD = 998244353;
const int N = 200000 + 5;
int fact[N], ifact[N];

int modpow(int a, int b){
    int ans = 1;
    while(b){
        if(b&1){
            ans = (ans*a)%MOD;
        } 
        a = (a*a)%MOD;
        b >>= 1;
    }
    return ans;
}

void f(){
    fact[0] = 1;
    for(int i=1;i<N;i++){
       fact[i] = fact[i-1]*i % MOD; 
    } 
    ifact[N-1] = modpow(fact[N-1], MOD-2);
    for(int i=N-2;i>=0;i--){
        ifact[i] = ifact[i+1]*(i+1)%MOD;
    }
}

int nCr(int n, int r){
    if(r<0 || r>n) return 0;
    return fact[n] * ifact[r] % MOD * ifact[n-r] % MOD;
}

void solve(int test){
    int n; 
    cin >> n;
    string s;
    cin >> s;
    int one = 0;
    for (int i = 0; i < n;i++){
        if(s[i]=='1'){
            one++;
        } 
    } 
    int temp1 = nCr(n,2) * nCr(n-2, one-1) % MOD;
    int temp2 = one * nCr(n, one+1) % MOD;
    int ans = (temp1 - temp2) % MOD;
    if(ans < 0) ans += MOD;
    cout << ans << nl;
}

int32_t main(){
    Muku28();
    f();
    int test=1;
    cin>>test;
    while(test--) solve(test);
    return 0;
}
