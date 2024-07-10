#include<bits/stdc++.h>
using namespace std;typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<ll> vi;typedef vector<string> vs;typedef pair<ll, ll> pii;
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define all(x) x.begin(), x.end()
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define nl cout<<"\n";
ll mod = 1e9 + 7;
const int N = 2e7 + 9;
bitset<N> is_prime;
void Best_sieve() {
  is_prime[1] = false;
  for (int i = 2; i < N; i++) {
    is_prime[i] = true;
  }
  for (int i = 2; i * i < N; i++) {
    if (is_prime[i]) {
      for (int j = i + i; j < N; j += i) {
        is_prime[j] = false;
      }
    }
  }
}
//Muku28
int Rehan(){
    Best_sieve();
    vector<pair<int,int>> Twin_primes;
    for (int i = 2; i + 2 < N;i++){
        if(is_prime[i]==true and is_prime[i+2]==true){
            Twin_primes.push_back(make_pair(i,i+2));
        }
    }
    int n ;
    while(cin>>n){
        cout << "(" << Twin_primes[n - 1].first << ", " << Twin_primes[n - 1].second << ")\n";
    }


    return 0;
}
//--------------28--------------//
int main(){
    Muku28();
    int t = 1;
    //cin>>t;
    while(t--){
        Rehan();
    }
		return 0;
 }

