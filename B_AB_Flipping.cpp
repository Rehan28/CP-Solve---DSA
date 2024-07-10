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
    string s;
    cin >> s;
    int x = -1;
    int y = -1;
    for (int i = 0; i < n;i++){
        if(s[i]=='A'){
            x = i;
            break;
        }
    }
    for (int i = n-1; i>-1;i--){
        if(s[i]=='B'){
            y = i;
            break;
        }
    }
    int ans = 0;
    if(x!=-1 and y!=-1){
        x = (y - x);
        ans = max(ans, x);
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
