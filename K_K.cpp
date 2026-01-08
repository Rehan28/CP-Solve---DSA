#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=1;i<=n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define mod 1000000007
#define int long long

const int N = 2e5 + 9;

map<int, vector<int>> mp;
int t[N][18], a[N];
void build(int n) {
  for(int i = 1; i <= n; ++i) t[i][0] = a[i];
  for(int k = 1; k < 18; ++k) {
    for(int i = 1; i + (1 << k) - 1 <= n; ++i) {
      t[i][k] = max(t[i][k - 1], t[i + (1 << (k - 1))][k - 1]);
    }
  }
}

int query(int l, int r) {
  int k = 31 - __builtin_clz(r - l + 1);
  return max(t[l][k], t[r - (1 << k) + 1][k]);
}

int f(int i,int j){
    int length = j - i + 1;
    int mx = query(i, j);
    vector<int> v;
    auto it = lower_bound(mp[mx].begin(), mp[mx].end(), i);
    v.push_back(i-1);
    while(*it>=i and *it<=j and it!=mp[mx].end()){
        v.push_back(*it);
        it++;
    }
    v.push_back(j+1);
    int s = v.size();
    int ans = length - s;
    ans += 2;
    for (int i = 0; i < s-1;i++){
        if(v[i+1]-v[i]>2){
            ans += f(v[i] + 1, v[i + 1] - 1);
        }
    }
    return ans;
}

void solve(int test) {
    int n;
    cin>>n;
    cin(a,n);
    build(n);
    for (int i = 1; i <= n;i++){
        mp[a[i]].push_back(i);
    }
    int ans = f(1, n);
    cout << ans << "\n";
    mp.clear();
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
