#include <bits/stdc++.h>
using namespace std;


#include <ext/pb_ds/assoc_container.hpp>//gcc thik korly jamela kore na
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>



typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define mod 1000000007

void solve(int test) {
    int n,k;
    cin>>n>>k;
    ordered_set st;
    for (int i = 1; i <= n;i++){
        st.insert(i);
    } 
    int x = 0;
    while (st.size()){
        x += k;
        int s = st.size();
        x = x % s;
        int ans = *st.find_by_order(x);
        cout << ans << " ";
        st.erase(st.find(ans));
    }
    cout << "\n";
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
