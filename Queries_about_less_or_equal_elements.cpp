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

void solve(int test) {
    int n,m;
    cin>>n>>m;
    vector<int> v;
    vector<int> v1;
    for (int i = 0; i < n;i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    for (int i = 0; i < m;i++){
        int a;
        cin >> a;
        v1.push_back(a);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < m;i++){
        auto it = upper_bound(v.begin(), v.end(), v1[i]);
        int ans = it - v.begin();
        cout << ans << " ";
    }
    cout << "\n";
}
int main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
