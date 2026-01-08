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
    int one = count(s.begin(), s.end(),'1');
    int zero = count(s.begin(), s.end(),'0');
    if(one!=zero){
        cout << 1 << "\n";
        cout << s << "\n";
    }
    else{
        cout << 2 << "\n";
        cout << s.substr(0, n - 1)<<" "<<s[n-1]<< "\n";
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
