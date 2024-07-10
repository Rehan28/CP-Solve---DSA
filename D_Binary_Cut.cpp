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
    string s;
    cin >> s;
    n = s.size();
    int ans = 1;
    bool f = false;
    if(s[0]=='0'){
        f = true;
    }
    for (int i = 0; i < n;i++){
        if(s[i]=='1' and f){
            ans++;
            f = false;
        }
        if(s[i]=='0' and f==false){
            ans++;
            f = true;
        }
    }
    for (int i = 0; i < n-1;i++){
        if(s[i]=='0' and s[i+1]=='1'){
            ans--;
            break;
        }
    }
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
