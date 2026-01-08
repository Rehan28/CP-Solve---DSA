#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long
const int N = 62;
int c[N][N];//combination

void pre(){
  c[0][0] = 1;
  for (int i = 1; i < N;i++){
    c[i][0] = c[i][i] = 1;
    for (int j = 1; j < N;j++){
      c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
    }
  }
}

void solve(int test) {
  int a, b, k;
  cin >> a >> b >> k;
  int n = a + b;
  pre();

  for (int i = 0; i < n;i++){
    int count = c[a - 1 + b][b];
    if(count>=k){
      cout << 'a';
      a--;
    }
    else{
      cout << 'b';
      b--;
      k -= count;
    }
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
