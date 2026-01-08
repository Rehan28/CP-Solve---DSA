#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define int long long
#define mod 1000000007

map<pair<int, int>, int> mp;

bool comp(int a, int b) {
  if(mp[{a,b}]==1){
        return a < b;
  }
  else{
      return a > b;
  }
}

void solve(int test) {
    int n;
    cin>>n;
    mp.clear();
    for (int i = 1; i <= n;i++){
        string s;
        cin >> s;
        for (int j = 1; j <= n;j++){
            if(s[j-1]=='1'){
                mp[{i, j}] = 1;
            }
        }
    }
    vector<int> vp;
    for (int i = 0; i <= n;i++){
        vp.push_back(i);
    }

    sort(vp.begin(), vp.end(), comp);

    for (int i = 0; i < n;i++){
        cout << vp[i]<< " ";
    }
    cout << "\n";
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
