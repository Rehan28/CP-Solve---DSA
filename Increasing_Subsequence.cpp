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

const int N = 2e5 + 9;
int dp[N];
int t[N * 4];
void build(int n,int b,int e) {// ata O(2*n) a kaj kore.
    if(b==e) {
        t[n] = 0;
        return;
    }
    int l = 2 * n;
    int r = 2 * n + 1;
    int mid = (b + e) / 2;
    build(l, b, mid);
    build(r, mid+1, e);
    t[n] = max(t[l],t[r]);
}
void update(int n,int b,int e,int i,int x) { 
    if(i>e or i<b) {
        return;
    }
    if(b==e and b==i) { 
        t[n] = x;
        return;
    }
    int l = 2 * n;
    int r = 2 * n + 1;
    int mid = (b + e) / 2;
    update(l, b, mid, i, x);
    update(r, mid+1, e, i, x);
    t[n] = max(t[l],t[r]);
}
int query(int n,int b,int e,int i,int j) {
    if(b>j or e<i){
        return 0;
    }
    if(b>=i and e<=j){
        return t[n];
    }
    int l = 2 * n;
    int r = 2 * n + 1;
    int mid = (b + e) / 2;
    return max(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}

void solve(int test) {//LIS = longest increasing Subsequence
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    build(1, 1, n);

    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }
    map<int, int> mp;
    int id = 1;
    for(auto x : st){
        mp[x] = id;
        id++;
    }
    for (int i = 0; i < n;i++){
        a[i] = mp[a[i]];
    }

    for (int i = 1; i <= n;i++){
        dp[i] = 1;
        if(a[i-1]!=1){
            int x = query(1, 1, n, 1, a[i-1]-1);
            x++;
            dp[i] = max(dp[i],x);   
        }
        update(1, 1, n, a[i-1], dp[i]);
        //cout << i << " " << dp[i] << "\n";
    }
    int length = -1;
    for (int i = 1; i <= n;i++){
        length = max(dp[i], length);
    }
    cout << length << "\n";
}
int main() {
    Muku28();
    int test=1;
   // cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
