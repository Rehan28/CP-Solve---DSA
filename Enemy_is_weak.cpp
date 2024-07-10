#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
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
    int a[n];
    cin(a,n);
    o_set<int> st;
    //i,j,k
    // j ar boro koyta
    ll jb[n] = {0};
    for (int i = 0; i < n;i++){
        jb[i] += (st.size() - st.order_of_key(a[i]));
        //size - choto
        st.insert(a[i]);
    }
    // j ar right a choto koyta
    o_set<int> st1;
    ll jc[n] = {0};
    for (int i = n - 1; i > -1;i--){
        jc[i] += st1.order_of_key(a[i]);
        st1.insert(a[i]);
    }
    ll ans = 0;
    for (int i = 0; i < n;i++){
        ans += (jc[i] * jb[i]);
        //
    }
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
