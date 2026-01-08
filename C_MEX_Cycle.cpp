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
    int n,x,y;
    cin >> n >> x >> y;
    int gap = y - x;
    x--;
    int ans[n + 1];
    for (int i = 0; i < n;i++){
        ans[(x + i)%(n)] = i % 2;
    }
    
    if(n%2 or (gap%2==0)){
        ans[x] = 2;
    }

    for (int i = 0; i < n;i++){
        cout << ans[i] << " ";
    }
    cout << "\n";
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
