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
    int lo = 0;
    int hi = 1000;
    while(hi - lo>1){
        int a = (2 * lo + hi) / 3;
        int b = (lo + 2 * hi) / 3;
        cout << "? " << a << " " << b << "\n";
        int res;
        cin >> res;
        if(res==(a*b)){
            lo = b;
        }
        else if(res==a*(b+1)){
            lo = a;
            hi = b;
        }
        else{
            hi = a;
        }
    }
    cout << "! " << hi << "\n";
}
int main() {
    //Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
