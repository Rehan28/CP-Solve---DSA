#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;

const int N = 1e5 + 9;
const int p1 = 137, mod1 = 127657753, p2 = 277, mod2 = 987654319;

int power(long long n, long long k, int mod) {
  int ans = 1 % mod; n %= mod; if (n < 0) n += mod;
  while (k) {
    if (k & 1) ans = (long long) ans * n % mod;
    n = (long long) n * n % mod;
    k >>= 1;
  }
  return ans;
}

int ip1, ip2;
int pw[N], ipw[N];
void precal() { // O(n)
  pw[0] = 1;
  for (int i = 1; i < N; i++) {
    pw[i] = 1LL * pw[i - 1] * p1 % mod1;
  }
  ip1 = power(p1, mod1 - 2, mod1);
  ipw[0] =  1;
  for (int i = 1; i < N; i++) {
    ipw[i] = 1LL * ipw[i - 1]* ip1 % mod1;
  }
}

struct Hashing {
   int pref[N];
  void build(string s) { // O(n)
    int n = s.size();
    for (int i = 0; i < n; i++) {
      pref[i] = 1LL * s[i] * pw[i] % mod1;
      if (i) pref[i] = (pref[i] + pref[i - 1]) % mod1;
    }
  }
  int get_hash(int i, int j) { // O(1)
    // assert(i <= j);
    int hs = 0;
    hs = pref[j];
    if (i) hs = (hs - pref[i - 1] + mod1) % mod1;
    hs = 1LL * hs * ipw[i] % mod1;
    return hs;
  }
}S;


void solve(int test) {
    int n,q;
    cin>>n>>q;
    vector<string> s;
    for (int i = 0; i < n;i++){
        string a;
        cin >> a;
        s.push_back(a);
    }
    vector<int> v;
    unordered_set<int> st;
    for (int i = 0; i < q;i++){
        int a;
        cin >> a;
        st.insert(a);
        v.push_back(a);
    }
    int nn = 1e5 + 5;
    vector<int> pre;
    int ans[100000] = {0};
    for(auto x:st){
        pre.push_back(x);
    }

    for (int i = 0; i < q; i++){
        set<string> st;
        for (int i = 0; i < s.size();i++){
            st
        }
    }
   
}
int main() {
    Muku28();
    int test=1;
    precal();
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
