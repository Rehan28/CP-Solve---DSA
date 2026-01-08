#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;

const int N = 1e6 + 9;
const int p1 = 137, mod1 = 127657753, p2 = 277, mod2 = 987654319;

//Big mod
int power(long long n, long long k, int mod) {
  int ans = 1 % mod; n %= mod; if (n < 0) n += mod;
  while (k) {
    if (k & 1) ans = (long long) ans * n % mod;
    n = (long long) n * n % mod;
    k >>= 1;
  }
  return ans;
}

//build prime and inverse prime
int ip1, ip2;
pair<int, int> pw[N], ipw[N];
void precal() {
  pw[0] =  {1, 1};
  for (int i = 1; i < N; i++) {
    pw[i].first = 1LL * pw[i - 1].first * p1 % mod1;
    pw[i].second = 1LL * pw[i - 1].second * p2 % mod2;
  }
  ip1 = power(p1, mod1 - 2, mod1);
  ip2 = power(p2, mod2 - 2, mod2);
  ipw[0] =  {1, 1};
  for (int i = 1; i < N; i++) {
    ipw[i].first = 1LL * ipw[i - 1].first * ip1 % mod1;
    ipw[i].second = 1LL * ipw[i - 1].second * ip2 % mod2;
  }
}
//full string hash
pair<int, int> string_hash(string s) {
  int n = s.size();
  pair<int, int> hs({0, 0});
  for (int i = 0; i < n; i++) {
    hs.first += 1LL * s[i] * pw[i].first % mod1;
    hs.first %= mod1;
    hs.second += 1LL * s[i] * pw[i].second % mod2;
    hs.second %= mod2;
  }
  return hs;
}
//build prefix
pair<int, int> pfx[N];
void build(string s) {
  int n = s.size();
  for (int i = 0; i < n; i++) {
    pfx[i].first = 1LL * s[i] * pw[i].first % mod1;
    if (i) pfx[i].first = (pfx[i].first + pfx[i - 1].first) % mod1;
    pfx[i].second = 1LL * s[i] * pw[i].second % mod2;
    if (i) pfx[i].second = (pfx[i].second + pfx[i - 1].second) % mod2;
  }
}
//Sub string prefix
pair<int, int> sub_string_hash(int i, int j) {
  assert(i <= j);
  pair<int, int> hs({0, 0});
  hs.first = pfx[j].first;
  if (i) hs.first = (hs.first - pfx[i - 1].first + mod1) % mod1;
  hs.first = 1LL * hs.first * ipw[i].first % mod1;
  hs.second = pfx[j].second;
  if (i) hs.second = (hs.second - pfx[i - 1].second + mod2) % mod2;
  hs.second = 1LL * hs.second * ipw[i].second % mod2;
  return hs;
}

pair<int, int> pfx2[N];
void build2(string s) {
  int n = s.size();
  for (int i = 0; i < n; i++) {
    pfx2[i].first = 1LL * s[i] * pw[i].first % mod1;
    if (i) pfx2[i].first = (pfx2[i].first + pfx2[i - 1].first) % mod1;
    pfx2[i].second = 1LL * s[i] * pw[i].second % mod2;
    if (i) pfx2[i].second = (pfx2[i].second + pfx2[i - 1].second) % mod2;
  }
}
//Sub string prefix
pair<int, int> sub_string_hash2(int i, int j) {
  assert(i <= j);
  pair<int, int> hs({0, 0});
  hs.first = pfx2[j].first;
  if (i) hs.first = (hs.first - pfx2[i - 1].first + mod1) % mod1;
  hs.first = 1LL * hs.first * ipw[i].first % mod1;
  hs.second = pfx2[j].second;
  if (i) hs.second = (hs.second - pfx2[i - 1].second + mod2) % mod2;
  hs.second = 1LL * hs.second * ipw[i].second % mod2;
  return hs;
}

int n;
int ans;
bool f(int x){
    set<pair<int, int>> hash_a;
    for (int i = 0; i + x - 1 < n;i++){
        hash_a.insert(sub_string_hash(i, i + x - 1));
    }
    for (int i = 0; i + x - 1 < n;i++){
        if(hash_a.find(sub_string_hash2(i,i+x-1))!=hash_a.end()){
            ans = i;
            return true;
        }
    }
    return false;
}

void solve(int test) {
    cin>>n;
    string a, b;
    cin >> a >> b;
    precal();
    build(a);
    build2(b);

    int lo = 1;
    int hi = n;
    string ans_string;
    while(lo<hi){
        int mid = lo + (hi - lo + 1) / 2;
        if(f(mid)){
            ans_string = b.substr(ans, mid);
            lo = mid;
        }
        else{
            hi = mid - 1;
        }
    }
    cout << ans_string << "\n";
}
int main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
