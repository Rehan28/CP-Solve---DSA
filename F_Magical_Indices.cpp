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
    int left[n + 1];
    left[0] = a[0];
    for (int i = 1; i < n;i++){
        left[i] = max(left[i - 1], a[i]);
    }
    int right[n + 1];
    right[n-1] = a[n-1];
    for (int i = n-2; i >-1 ;i--){
        right[i] = min(right[i + 1], a[i]);
    }
    int ans = 0;
    for (int i = 1; i < n - 1;i++){
        if(a[i]>=left[i-1] and a[i]<=right[i+1]){
            ans++;
        }
    }
    cout << ans << "\n";
}
int main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
