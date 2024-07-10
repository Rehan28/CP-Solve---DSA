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

const int N = 1e3 + 9;
int dp[N];
void solve(int test) {//LIS = longest increasing Subsequence
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    for (int i = 0; i < n;i++){
        for (int j = 0; j < i;j++){
            if(a[j]<a[i]){
                dp[i] = max(dp[j], dp[i]);
            }
        }
        dp[i]++;
    }
    int length = 0;
    for (int i = 0; i < n;i++){
        length = max(length, dp[i]);
    }
    cout << length << "\n";
}
int main() {
    Muku28();
    int test=1;
   // cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
