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
    string s;cin >> s;
    for (int i = 0; i < s.size();i++){
        if(s[i]=='H' or s[i]=='Q' or s[i]=='9'){
            yes;
            return;
        }
    }
    no;
}
int main() {
    Muku28();
    solve(1);
    return 0;
}
