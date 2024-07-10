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

const int N = 5e4+9;

ll f[N];
ll pfx[N];
int spf[N];
void val(){
    for (int i = 2; i < N;i++){
        ll x = i-1;
        f[i] = (x * (x + 1) * ((2*x)+1)) / 6;
        // sum of 1^2+2^2+ 3^2 + ---+ (n-1)^2
    }
}
void PrimeFact(){
    val();
    for (int i = 2; i < N;i++){
        spf[i] = i;
    }
    for (int i = 2; i < N;i++){
        for (int j = i; j <= N;j+=i){
            spf[j] = min(spf[j], i);
        }
    }
    for (ll i = 2; i < N; i++){
        ll sum = 0;
        ll x = i;
        vector<ll> prime;
        while(spf[x]>1){
            ll p = spf[x];
            prime.push_back(p);
            //progression sum of p
            while(x%p==0){
                x /= p;
            }
        }
        //Inclusion exclusion - korchi prime gular multiplication gula bad dia
        for (int mask=1; mask<(1<<prime.size()); mask++) {
            ll mult = 1,bits = 0;
            for (int k=0; k<(int)prime.size(); k++){
                if (mask & (1<<k)) {
                    bits++;
                    mult *= prime[k];
                    //cout << prime[k] << " ";
                }
            }
            if(mult==i){
                continue;
            }
            ll n = i/mult;
            n--;
            if (bits % 2 == 1)
                sum += (mult*mult)*((n * (n + 1) * (2*n+1)) / 6);
            else
                sum -= (mult*mult)*((n * (n + 1) * (2*n+1)) / 6);
        }
        f[i] = f[i] - sum;
         
    }
}
void cal(){
    pfx[0] = 0;
    pfx[1] = 1;
    for (int i = 2; i < N;i++){
        pfx[i] = pfx[i - 1] + f[i];
    }
    //cout << pfx[N - 1] << "\n";
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