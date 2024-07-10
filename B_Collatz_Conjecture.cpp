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
//#define int long long

void solve(int test) {
    int x, y, k;
    cin >> x >> y >> k;
    while(k){
        int m = x % y;
        int val = y - m;
        // dbg(x);
        // dbg(k);
        if(x<y){
            if(val<k){
                k -= val;
            }
            k %= (y-1);
            x = 0;
            if(k/y==0){
                x = 1;
            }
            x += k+1;
            break;
        }
        if(val<=k){
            x += val;
            k -= val;
            while(x%y==0){
                x /= y;
            }
        }
        else{
            x += k;
            k = 0;
        }
    } 
    cout << x << "\n";
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
