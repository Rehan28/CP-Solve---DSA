// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
// #define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
// int Rehan(int test) {
//     int n;
//     cin>>n;
//     int a[n];
//     cin(a,n);
//     vector<int> p;
//     int x = 2;
//     for (int i = 1; i <= n;i++){
//         bool f = true;
//         for (int j = 2; j <= i+1;j++){
//             if(a[i-1]%j!=0){
//                 f = false;
//                 break;
//             }
//         }
//         if(f){
//             cout << "NO\n";
//             return 0;
//         }
//     }
//     cout << "YES\n";
//     ll lc = 2;
//     for (ll i = 2; i < 30;i++){
//         lc = (i * lc) / __gcd(i, lc);
//         cout << lc << " " << i << "\n";
//     }
//         return 0;
// }
// //--------------28--------------//
// int main(){
//     Muku28();
// 	int t = 1;
// 	cin>>t;
//     for(int i = 1; i <= t; i++){
//         Rehan(i);
//     }
// 		return 0;
//  }

#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a, n);
    
    for (int i = 0; i <n;i++){
        bool f = true;
        for (int j = i + 2; j >= 2;j--){
            if(a[i]%j){
                f = false;
                break;
            }
        }
        if(f){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
