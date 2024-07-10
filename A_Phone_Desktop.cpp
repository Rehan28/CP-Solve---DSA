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
    int x, y;
    cin >> x >> y;
    int ans = 0;
    ans += (y / 2);
    x -= (ans * 7);
    if(y%2){
        ans++;
        x -= 11;
    }
    //dbg(x);
    int b = 0;
    if(x>0){
        ans += x / 15;
        if(x%15){
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
