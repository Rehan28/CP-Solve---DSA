#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define mod 1000000007

void solve(int test) {
    int n, q;
    cin >> n >> q;
    int a[n];
    cin(a,n);

    ordered_set<pair<int,int>> o_set;

    for(int i=0;i<n;i++){
        o_set.insert({a[i],i+1});
    }

    while (q--){
        char c;
        int x, y;
        cin >> c >> x >> y;

        if(c=='?'){
            cout << o_set.order_of_key({y + 1,0}) - o_set.order_of_key({x,0}) << nl;
        } 
        else {
            o_set.erase({a[x - 1],x});
            y += a[x - 1];
            o_set.insert({y,x});
        }
    }
   
    
}
int main() {
   // Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
