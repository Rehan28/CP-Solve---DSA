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
    int n,k;
    cin>>n>>k;
    map<int, int> mp;
    for (int i = 0; i < k;i++){
        int a, b;
        cin >> a >> b;
        mp[a] += b;
    }
    vector<int> v;
    for(auto x:mp){
        v.push_back(x.second);
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    int ans = 0;
    for (int i = 0; i < v.size();i++){
        if(n==0){
            break;
        }
        ans += v[i];
        n--;
    }
    cout << ans << "\n";
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
