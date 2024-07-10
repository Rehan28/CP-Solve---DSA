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

const int N = 1e5 + 9;
ll a[N], t[4 * N], lazy[4 * N];

void push(int n,int b,int e){
    if(lazy[n]==0){
        return;
    }
    t[n] = t[n] | lazy[n];
    int mid = (e + b) / 2, l = 2 * n, r = 2 * n + 1;
    if(b!=e){
        lazy[l] = lazy[l] | lazy[n];
        lazy[r] = lazy[r] | lazy[n];
    }
    lazy[n] = 0;
}

void build(int n,int b,int e){
    lazy[n] = 0;
    if(b==e){
        t[n] = 0;
        return;
    }
    int mid = (e + b) / 2, l = 2 * n, r = 2 * n + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = t[l] & t[r];
}

void update(int n,int b,int e,int i,int j,int v){
    push(n, b, e);
    if(b>j or e<i){
        return;
    }
    if(b>=i and e<=j){
        lazy[n] = v;
        push(n, b, e);
        return;
    }
    int mid = (e + b) / 2, l = 2 * n, r = 2 * n + 1;
    update(l, b, mid, i, j, v);
    update(r, mid+1, e, i, j, v);
    t[n] = t[l] & t[r];
}

ll query(int n,int b,int e,int i,int j){
    push(n, b, e);
    if(b>j or e<i){
        return (1<<30)-1;
    }
    if(b>=i and e<=j){
        return t[n];
    }
    int mid = (e + b) / 2, l = 2 * n, r = 2 * n + 1;
    return query(l, b, mid, i, j) & query(r, mid + 1, e, i, j);
}

void solve(int test) {
    int n,q;
    cin>>n>>q;
    build(1, 1, n);
    //dbg(lazy[1]);
    while (q--){
        int type;
        cin >> type;
        if(type==1){
            int x, y, z;
            cin >> x >> y >> z;
            x++;
            update(1, 1, n, x, y, z);
        }
        else{
            int x, y;
            cin >> x >> y;
            x++;
            cout << query(1, 1, n, x, y) << "\n";
        }
    }
    
    
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
