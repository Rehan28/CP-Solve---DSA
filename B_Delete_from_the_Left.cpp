#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;



void solve(int test) {
    string s, s1;
    cin >> s >> s1;
    int n = s.size(), m = s1.size();
    int ans = n + m;

    n--;
    m--;
    while(1){
        if(n>=0 and m>=0 and s[n]==s1[m]){
            ans -= 2;
            n--;
            m--;
        }
        else{
            break;
        }
    }

    cout<<ans<<"\n";
        

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
