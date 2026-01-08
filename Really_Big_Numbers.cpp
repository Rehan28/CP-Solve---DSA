#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n, m;
    cin >> n >> m;
    int x = m;

    if(m%9){
        int y = m % 9;
        x -= y;
        x += 9;
    }

    int k = n+1;
    for (int i = x; i <= n;i++){
        string s = to_string(i);
        int sum = 0;
        for (char c : s) {
            sum += c - '0';
        }
        if((i-sum)>= m){
            k = i;
            break;
        }
    }

    cout<< n-k+1 <<nl;
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
