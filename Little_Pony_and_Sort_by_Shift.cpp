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

void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    vector<int> v;
    for (int i = 0; i < n;i++){
        v.push_back(a[i]);
    }
    for (int i = 0; i < n;i++){
        v.push_back(a[i]);
    }
    int last = 0;
    for (int i = 0; i < v.size() - 1;i++){
        if(v[i]>v[i+1]){
            int x = i - last + 1;
            if(x==n){
                int ans = n - last;
                ans %= n;
                cout << ans << "\n";
                return;
            }
            else{
                last = i+1;
            }
        }
        int x = i - last + 1;
         if(x==n){
            int ans = n - last;
            ans %= n;
            cout << ans << "\n";
            return;
        }
    }
    cout << -1 << "\n";
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
