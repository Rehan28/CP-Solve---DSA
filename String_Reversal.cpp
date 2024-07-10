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
    string s;
    cin >> s;
    string s1 = "";
    for (int i = n - 1; i > -1;i--){
        s1 += s[i];
    }
    map<char, vector<int>> mps;
    map<char, vector<int>> mps1;
    for (int i = 0; i < n;i++){
        //previous position
        mps[s[i]].push_back(i);
    }
    for (int i = 0; i < n;i++){
        //last position
        mps1[s1[i]].push_back(i);
    }
    int p[n];
    for (char i = 'a'; i <= 'z';i++){
        for (int j = 0; j < mps1[i].size();j++){
            p[mps1[i][j]] = mps[i][j];
        }
    }
    o_set<int> st;
    ll inver = 0;
    for (int i = n - 1; i > -1;i--){
        inver += st.order_of_key(p[i]);
        st.insert(p[i]);
    }
    cout << inver << "\n";
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
