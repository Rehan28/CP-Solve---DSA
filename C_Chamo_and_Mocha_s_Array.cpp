#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define mod 1000000007
#define int long long


void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    if(n==2){
        cout << min(a[0], a[1]) << "\n";
    }
    else{
        int ans = 0;
        for (int i = 0; i < n - 2;i++){
            vector<int> v;
            for (int j = i; j < i+3;j++){
                v.push_back(a[j]);
            }
            sort(v.begin(), v.end());
            ans = max(v[1], ans);
        }
        cout << ans << "\n";
    }
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
