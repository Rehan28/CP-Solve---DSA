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

//Muku28
int Rehan(){
    int n;
    cin>>n;
    int a[n];
    cin(a,n);

    return 0;
}
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
int a[N];
//--------------28--------------//
int main(){
    Muku28();
    int t = 0;
    cin>>t;
    Best_sieve();
    vector<int> v;
    for (int i = 2; i < N - 1;i++){
        if(is_prime[i]){
            v.push_back(i);
        }
    }
    //cout << v[a[10]] << '\n';
    for (int k = 1; k <= t; k++){
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 0; i <= v.size();i++){
            int x = n - v[i];
            if(v[i]>n or x<v[i]){
                break;
            }
            if(is_prime[x]){
                ans++;
            }
        }
        cout << "Case " << k << ": " << ans << '\n';
    }
    return 0;
 }