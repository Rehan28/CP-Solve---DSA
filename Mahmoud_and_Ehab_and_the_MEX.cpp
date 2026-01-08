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
    int n,x;
    cin >> n >> x;
    int a[n];
    cin(a,n);
    map<int, int> mp;
    for (int i = 0; i < n;i++){
        mp[a[i]] = 1;
    }
    int ans = 0;
    if(mp[x]==1){
        ans++;
    }
    while(x){
        x--;
        if(mp[x]==0){
            ans++;
        }
    }
    cout << ans << "\n";
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
