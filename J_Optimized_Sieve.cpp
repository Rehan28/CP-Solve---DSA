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

const int N = 1e8;
bitset<N> is_prime;
void Best_sieve() {
  is_prime[1] = false;
  for (int i = 2; i <N; i++) {
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
//--------------28--------------//
int main(){
    Muku28();
    Best_sieve();
    vector<int> prime;
    for (int i = 2; i < N;i++){
        if(is_prime[i]){
            prime.push_back(i);
        }
    }
    for (int i = 0; i < prime.size();i +=100){
        cout << prime[i] << "\n";
    }
 }