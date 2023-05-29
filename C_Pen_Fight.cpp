#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
  int n, m;
  cin >> n ;
  vector<int> scores(n);
  for(int i = 0; i < n; i++) {
    cin >> scores[i];
  }
  vector<int> pens(n);
  for(int i = 0; i < n; i++) {
    pens[i] = i + 1;
  }
  cin>>m;
  while(m--) {
    int tt;
      cin>>tt;
      if(tt == 1){
        int x, y;
        cin>>x>>y;
        if(scores[x-1] > scores[y-1]){
          scores[x-1] += scores[y-1] + scores[y-1];
          scores[y-1] = 0;
            pens[x-1] += pens[y-1] + 1;
          pens[y-1] = 0;
        }
        else if(scores[x-1] < scores[y-1]){
          scores[y-1] += scores[x-1] + scores[x-1];
          scores[x-1] = 0;
        }
      }
    else if(tt == 2) {
      int a;
      cin >> a;
      cout << pens[a - 1] << endl;
    }
    else {
      int a;
      cin >> a;
      for(int i = 0; i < n; i++) {
        if(scores[i]> a) {
          cout << a+1 << endl;
          break;
        }
      }
    }
  }
    }
  return 0;
}