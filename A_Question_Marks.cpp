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
    string s;
    cin >> s;
    int a = 0, b = 0, c = 0, d = 0;
    for (int i = 0; i < 4 * n;i++){
        if(s[i]=='A'){
            a++;
        }else if(s[i]=='B'){
            b++;
        }else if(s[i]=='C'){
            c++;
        }else if(s[i]=='D'){
            d++;
        }
    }
    int ans = min(n, a);
    ans += min(n, b);
    ans += min(n, c);
    ans += min(n, d);
    cout << ans << "\n";
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
