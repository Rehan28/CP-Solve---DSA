#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n, c;
    cin >> n >> c;
    int a[n];
    cin(a,n);

    sort(a, a + n);
    int ans = n;
    vector<int> v;
    for (int i = 0; i < n;i++){
        if(a[i]<=c){
            v.push_back(a[i]);
        }
    }
    v.push_back(-1);
    sort(v.begin(), v.end());

    int x = 1;
    for (int i = v.size() - 1; i > 0; i--) {
        int val = v[i];
        for(int j=1;j<x;j++){
            val *= 2;
        }
        
        if((val)<=c){
            ans--;
            x++;
        }
    }
    cout<<ans<<nl;
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
