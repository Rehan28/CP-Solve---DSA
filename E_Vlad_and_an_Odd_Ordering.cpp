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
    int n,k;
    cin>>n>>k;
    int sum = 0;
    int x = 1;
    while(1){
        int last_sum = sum;
        sum += n / 2;
        if(n%2){
            sum++;
        }
        if(k<=sum){
            int oddth = k - last_sum;
            oddth = (oddth * 2) - 1;// oddth th odd
            int value = oddth * x;
            cout << value << "\n";
            break;
        }
        x *= 2;
        n /= 2;
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
