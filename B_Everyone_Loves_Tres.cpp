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
    int n;
    cin>>n;
    if(n==1 or n==3){
        cout << -1 << "\n";
    }else{
        if(n%2){
            for (int i = 0; i + 5< n;i++){
                cout << 3;
            }
            cout << 36366 << "\n";
        }
        else{
            for (int i = 0; i + 2< n;i++){
                cout << 3;
            }
            cout << 66 << "\n";
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
