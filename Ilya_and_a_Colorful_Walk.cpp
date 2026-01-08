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
    int s[n];
    cin(s,n);
    int ans = 0;
    for (int i = n - 1;i>0;i--){
        if(s[i]!=s[0]){
            ans = i;
            break;
        }
    }
    for (int j = 0; j < n - 1;j++){
        if(s[j]!=s[n-1]){
            int x = j + 1;
            ans = max(ans, (n-x));
            break;
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
