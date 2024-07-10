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
#define int long long

void solve(int test) {
    int n,a,b;
    cin>>n>>a>>b;
    if(a>=b){
        cout << n * a << "\n";
    }
    else{
        int x = b - a;
        if(x>=n){
            int y = b - n;
            cout << ((b * (b + 1)) / 2) - (y * (y + 1)) / 2 << "\n";
        }
        else{
            int y = n - x;
            int sum = y * a;
            sum += ((b * (b + 1)) / 2) - (a * (a + 1)) / 2;
            cout<<sum<<"\n";
        }
    }
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
