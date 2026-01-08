#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;



void solve(int test) {
    int n;
    cin>>n;
    string s;
    cin >> s;

    int ans = 0;
    int c = 0;
    for (int i = 0; i < n;i++){
        if(s[i]=='x'){
            c++;
        }
        else{
            ans += max(0, (c - 2));
            c = 0;
        }
    }
    ans += max(0, (c - 2));

    cout << ans << "\n";
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
