
// #include <bits/stdc++.h>
// using namespace std;
// void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
// #define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
// #define nl "\n"
// #define dbg(x) cout<<#x<<" = "<<x<<nl;
// #define int long long

// void solve(int test) {
//     int a, b, c;
//     cin >> a >> b >> c;
//     int f = 0;
//     if((a + c) % 2 != 0){
//         a++;
//         f = 1;
//     }

//     int xa = 2 * b - c;
//     int xb = (a + c) / 2;
    
//     int xc = 2 * b - a;
    
//     int ans = 1e18;
//     if((xa - a)>=0){
//         ans = min(ans, (xa - a));
//     }
//     if((xb - b)>=0){
//         ans = min(ans, (xb - b));
//     }
//     if((xc - c)>=0){
//         ans = min(ans, (xc - c));
//     }
    

//     if(f){
//         ans++;
//     }
//     cout << ans << "\n";
// }

// int32_t main() {
//     Muku28();
//     int test=1;
//     //cin>>test;
//     for(int i=1;i<=test;i++) {
//         solve(i);
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int a, b, c;
    cin >> a >> b >> c;

    int ans = 0;
    if((a+c)%2!=0){
        a++;
        ans++;
    }

    int x = (a + c) / 2;

    cout<<ans + abs(x - b)<<nl;
}
int32_t main() {
    Muku28();
    int test=1;
    //cin>>test; 
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
