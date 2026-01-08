#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define D(x) cout << #x << " -> " << x << "\n";

int getOne(ll m, ll seg) {
  ll ones = (m / seg) * (seg / 2);
  ll rones = ((m % seg <= (seg / 2)) ? 0LL: ((m % seg) - seg / 2));
  return ones + rones;
} 

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  ll n, m;
  cin >> n >> m;
  m++;
  ll num = 0;
  for (int b = 1; b < 45; b++) {
      cout << b << "\n";
      ll seg = (1LL << b);
      ll boro = getOne(m, seg);
      cout << boro << "\n";
      ll choto = getOne(n, seg);
      cout << choto << "\n";
      if ((boro - choto) & 1)
          num |= (1LL << (b - 1));
  }
  cout << num << "\n";
  return 0;
}