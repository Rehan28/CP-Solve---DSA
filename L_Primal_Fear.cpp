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
const int N = 1e6 + 9;
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
    int n;
    cin>>n;
    int a[n];
    cin(a,n);

    return 0;
}
//--------------28--------------//
int p[N];
int ans[N];
int main(){
    Muku28();
    Best_sieve();
    int t = 1;
    for (int i = 2; i < N;i++){
        if(is_prime[i]){
            int x = 10;
            bool f = true;
            string s = to_string(i);
            for (int j = 0; j < s.size();j++){
                    if(s[j]=='0'){
                        f = false;
                        break;
                    }
            }
            while(f)
            {
                int div = i / x;
                int modu = i % x;
                if (is_prime[modu] == false)
                {
                    f = false;
                    break;
                }
                if(div==0){
                    break;
                }
                x *= 10;
            } 
            if(f)
                p[i] = 1;
        }
    }
    for (int i = 1; i < N;i++){
        ans[i] = ans[i-1] + p[i];
    }
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << ans[n] << "\n";
    }
	return 0;
 }