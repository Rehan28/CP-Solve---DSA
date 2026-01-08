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

bool is_prime(int n){
    int x = sqrt(n) + 1;
    for (int i = 2;i<=x;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void solve(int test) {
    int n;
    cin>>n;
    int x = 4;
    while(1){
        if(is_prime(x)==false and is_prime(x+n)==false){
            cout << x+n << " " << x << "\n";
            break;
        }
        x++;
    }
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
