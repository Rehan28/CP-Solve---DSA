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

const int N = 5e6+9;
int t[3* N * 4];
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
    t[n] = t[l] + t[r];
}
void update(int n,int b,int e,int i,int x) { 
    if(i>e or i<b) {
        return;
    }
    if(b==e and b==i) { 
        t[n] += x;
        return;
    }
    int l = 2 * n;
    int r = 2 * n + 1;
    int mid = (b + e) / 2;
    update(l, b, mid, i, x);
    update(r, mid+1, e, i, x);
    t[n] = t[l] + t[r]; 
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
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

void solve(int test) {
    int n,q;
    cin>>n>>q;
    cout << "Case " << test << ":\n";
    set<int> st;
    int a[n+1];
    int b[n+1];
    int Q[q];
    for (int i = 1; i <=n;i++){
        cin >> a[i] >> b[i];
        st.insert(a[i]);
        st.insert(b[i]);
    }
    for(int i=0;i<q;i++){
        cin >> Q[i];
        st.insert(Q[i]);
    }
    map<int, int> mp;
    int id = 0;
    for(auto x : st){
        mp[x] = ++id;
        //id++;
    }
    // Called Coordinate Compression
    // atar kaj holo boro akta range a number ar modde kichu jayga faka thakle 
    // ota compres kore jay (1,5,10) rea = 1,2,3 banano jay
   

    //# ata + - kore korchi.
    // map<int, int> ans;
    // for (int i = 0; i < n;i++){
    //     a[i] = mp[a[i]];
    //     b[i] = mp[b[i]];
    //     ans[a[i]]++;
    //     ans[b[i] + 1]--;
    // }
    // ll pfx[N+1];
    // pfx[0] = 0;
    // for (int i = 1; i < N-1;i++){
    //     pfx[i] = pfx[i - 1] + ans[i];
    // }
    // for (int i = 0; i < q;i++){
    //     int x = mp[Q[i]];//Q[i] o change hoiche
    //     cout << pfx[x] << "\n";
    // }

    //same e  sudu segment tree use kore korbo
    build(1, 1, id);
    for (int i = 1; i <= n;i++){
        int l = mp[a[i]];
        int r = mp[b[i]];
        update(1, 1, id, l, +1);
        if(r+1<=id){
            update(1, 1, id, r+1, -1);
        }
    }
    for (int i = 0; i < q;i++){
        int ans = mp[Q[i]];
        cout << query(1, 1, id, 1, ans) << "\n";
    }
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
