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
    int a[n];
    cin(a,n);
    int pfx[n + 1];
    pfx[0] = 0;
    for (int i = 1; i <= n;i++){
        pfx[i] = pfx[i - 1] + a[i - 1];
    }
    set<int> st;
    int ans = 0;
    st.insert(0);
    for (int i = 1; i <= n;i++){
        int x = pfx[i];
        if(st.find(x)!=st.end()){
            ans++;
            //dbg(i);
            st.clear();
        }
        st.insert(x);
    }
    cout << ans << "\n";
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
