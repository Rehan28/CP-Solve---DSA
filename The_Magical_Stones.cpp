#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);

    vector<int> v;
    for (int i = 0; i < n;i++){
       v.push_back(a[i]);
    }
    sort(v.begin(), v.end());
    map<int, int> mp;

    for (int i = n - 1; i > -1;i--){
        int x = v[i];
        while(v[i-1]==x){
            i--;
        }
        mp[x] = i;
    }
    for (int i = 0; i < n;i++){
        cout << mp[a[i]] << " ";
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
