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

int32_t main() {      
    Muku28();
    int x;
    cin >> x;
    int ans = ((x * 2 + 2) / 3) + (x + 1) / 2;
    if(x%3==2&&(x%2==1))
        ans--;
    cout << ans << '\n';
    return 0;
}
