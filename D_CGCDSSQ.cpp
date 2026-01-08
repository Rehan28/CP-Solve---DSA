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

const int N = 1e5 + 9;

int t[N][18], a[N];


void build(int n) {
  for(int i = 1; i <= n; ++i) t[i][0] = a[i];
  for(int k = 1; k < 18; ++k) {
    for(int i = 1; i + (1 << k) - 1 <= n; ++i) {
      t[i][k] = __gcd(t[i][k - 1], t[i + (1 << (k - 1))][k - 1]);
    }
  }
}

int query(int l, int r) {
  int k = 31 - __builtin_clz(r - l + 1);
  return __gcd(t[l][k], t[r - (1 << k) + 1][k]);
}

void solve(int test) {
    int n;
    cin>>n;
    cin(a,n);
    build(n);
    map<int, int> mp;
 
   for(int i=1; i<=n; i++){
      int pre = i;
      while (pre<=n){
         int gd = query(i, pre);
         int pos = pre;
         int lo = pre, hi = n;
         while(hi-lo>1){
            int mid = (hi+lo)/2;
            if(query(i, mid)==gd){
                lo = mid;
            }
            else{
                hi = mid-1;
            } 
         }
         if(query(i, hi)==gd){
            pos = hi;
         }
         else{
            pos = lo;
         } 
         int add = pos-pre+1;
         mp[gd] += add;
         pre = pos+1;
      }
   }
   int q;
   cin >> q;
   while(q--){
       int x;
       cin >> x;
       cout << mp[x] << "\n";
   }
}
int32_t main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
