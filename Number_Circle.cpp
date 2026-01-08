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
    sort(a, a + n);
    if(a[n-2]<a[n-1]+a[0] and a[n-2]+a[n-3]>a[n-1]){
        yes;
        for (int i = 0; i < n-2;i++){
            cout << a[i] << " ";
        }
        cout << a[n - 1] << " " << a[n - 2] << "\n";
    }
    else{
        no;
    }
    // int c = 0;
    // for (int i = n - 3; i > 0;i--){
    //     if(a[i]+a[n-2]>a[n-1]){
    //         c = i;
    //     }
    // }
    // vector<int> v;
    // int x = 0;
    // for (int i = 0; i <= c;i++){
    //     v.push_back(a[i]);
    //     x++;
    // }
    // for (int i = n - 1; i > -1;i--){
    //     v.push_back(a[i]);
    //     x++;
    //     if(x==n){
    //         break;
    //     }
    // }
    // bool f = true;
    // for (int i = 1; i < n - 1;i++){
    //     if(v[i-1]+v[i+1]<=v[i]){
    //         f = false;
    //         break;
    //     }
    // }
    // if(f and v[1]+v[n-1]>v[0] and v[0]+v[n-2]>v[n-1]){
    //     yes;
    //     for (int i = 0; i < n;i++){
    //         cout << v[i] << " ";
    //     }
    //     cout << "\n";
    // }
    // else{
    //     no;
    // }
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
