#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;

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
    vector<pair<int, int>> vp;
    for (int i = 0; i < n;i++){
        int a, b;
        cin >> a >> b;
        vp.push_back(make_pair(b, a));
    }
    sort(vp.begin(), vp.end());
    reverse(vp.begin(), vp.end());
    ordered_set st;
    ll ans = 0;
    for (int i = 0; i < n;i++){
        int x = st.order_of_key(vp[i].second);
        ans += x;
        st.insert(vp[i].second);
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
