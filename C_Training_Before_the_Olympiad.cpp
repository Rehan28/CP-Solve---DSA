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
    ll sum = 0;
    int odd = 0;
    for (int i = 0;i<n;i++){
        sum += a[i];
        if(a[i]%2){
            odd++;
        }
        int x = odd / 3;
        ll y = sum - x;
        if(y%2 and i!=0){
            cout << y- 1 << " ";
        }
        else{
            cout << y << " ";
        }
    }
    cout << "\n";
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
