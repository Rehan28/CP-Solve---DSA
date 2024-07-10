#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "No"<<nl;
#define yes cout << "Yes"<<nl;
#define mod 1000000007

const ll N = 1e5 + 10;
bool is_prime[N];
vector<ll> prime;
int c = 0;

void Sieve(){
    for (ll i = 2; i < N;i++){
        if(!is_prime[i]){
            prime.push_back(i*i);
            c++;
            for (ll j = i + i; j < N;j = j+i){
                is_prime[j] = true;
            }
        }
    }
}

void solve(int test) {
    ll n;
    cin>>n;
    for (int i = 0; i < c - 1;i++){
        for (int j = i + 1; j < c;j++){
            ll sum = prime[i] + prime[j];
            ll need = n - sum;
            if(need>0 and need!=prime[i] and need!=prime[j]){
                yes;
                return;
            }
            if(need<0){
                break;
            }
        }
    }
    no;
}
int main() {
    Muku28();
    int test=1;
    cin>>test;
    Sieve();
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
