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
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    map<int, int> mp;
    for (int i = 0;i<n;i++){
        mp[a[i]]++;
    }
    int mx = *max_element(a, a + n) + 1;
    ll dp[mx];
    dp[0] = 0;
    for (ll i = 1; i < mx;i++){
        if(i==1){
            dp[i] = max(dp[i - 1],  mp[i]* i);
        }
        else{
            dp[i] = max(dp[i - 1], (dp[i - 2] + (mp[i] * i)));
        }
    }
    cout << dp[mx-1]<< "\n";
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
