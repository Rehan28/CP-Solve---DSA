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
    string s;
    cin >> s;
    int n;
    cin >> n;
    string ss = "";
    ss += s[0];
    ss += s[1];
    int h = stoi(ss);
    string ss1 = "";
    ss1 += s[3];
    ss1 += s[4];
    int m = stoi(ss1);
    m += n;
    if(m>59){
        int x = m / 60;
        h+=x;
        m %= 60;
    }
    h %= 24;
    if(h<10){
        cout << '0';
    }
    cout << h << ':';
    if(m<10){
        cout << '0';
    }
    cout << m << "\n";
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
