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

const int N = 1e5+9;
int a[N];
struct node{
    int first_element, first_oc;
    int last_element, last_oc;
    int strong;
};
node t[N * 4];
node marge(node l,node r){
    node ans;
    ans.first_element = l.first_element;
    ans.first_oc = l.first_oc;
    if(l.first_element==r.first_element){
        ans.first_oc = l.first_oc + r.first_oc;
    }
    ans.last_element = r.last_element;
    ans.last_oc = r.last_oc;
    if(l.last_element==r.last_element){
        ans.last_oc = l.last_oc + r.last_oc;
    }
    ans.strong = max(l.strong, r.strong);
    if(l.last_element==r.first_element){
        ans.strong = max(ans.strong, (l.last_oc + r.first_oc));
    }
    return ans;
}
void build(int n,int b,int e) {// ata O(2*n) a kaj kore.
    if(b==e) {
        t[n].first_element = a[b];
        t[n].last_element = a[b];
        t[n].first_oc = 1;
        t[n].last_oc = 1;
        t[n].strong = 1;
        return;
    }
    int l = 2 * n;
    int r = 2 * n + 1;
    int mid = (b + e) / 2;
    build(l, b, mid);
    build(r, mid+1, e);
    t[n] = marge(t[l], t[r]);
}
// void update(int n,int b,int e,int i,int x) { 
//     if(i>e or i<b) {
//         return;
//     }
//     if(b==e and b==i) { 
//         t[n] = x;
//         return;
//     }
//     int l = 2 * n;
//     int r = 2 * n + 1;
//     int mid = (b + e) / 2;
//     update(l, b, mid, i, x);
//     update(r, mid+1, e, i, x);
//     t[n] = marge(t[l], t[r]);; 
// }
node query(int n,int b,int e,int i,int j) {
    if(b>j or e<i){
        return {-1,-1,-1,-1,-1};
    }
    if(b>=i and e<=j){
        return t[n];
    }
    int l = 2 * n;
    int r = 2 * n + 1;
    int mid = (b + e) / 2;
    return marge(query(l, b, mid, i, j),query(r, mid + 1, e, i, j));
}

void solve(int test) {
    cout << "Case " << test << ":\n";
    int n,c,q;
    cin>>n>>c>>q;
    for (int i = 1; i <= n;i++){
        cin >> a[i];
    }
    build(1, 1, n);
    while (q--){
        int x,y;
        cin >> x >> y;
        node ans = query(1, 1, n, x, y);
        cout << ans.strong << "\n";
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
