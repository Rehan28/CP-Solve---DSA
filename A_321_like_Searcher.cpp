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
    n = 1;
    int x = 1;
    while(n<=983210){
        string s = to_string(n);
        bool f = true;
        for (int i = 0; i < s.size();i++){
            if(s[i]<=s[i+1]){
                f = false;
                break;
            }
        }
        if(f){
            cout << x << " " << n << "\n";
            x++;
        }
        n++;
    }
   
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
