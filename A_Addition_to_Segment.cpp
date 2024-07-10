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
int a[N];
ll t[4 * N], lazy[4 * N];

void push(int n,int b,int e){
    if(lazy[n]==0){
        return;
    }
    t[n] = t[n] + 1LL*(e - b + 1) * lazy[n];
    if(b!=e){
       int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
       lazy[l] += lazy[n];
       lazy[r] += lazy[n];
    }
    lazy[n] = 0;
}

void build(int n,int b,int e){
    if(b==e){
        t[n] = 0;//akhane first a sob value 0 thakbe
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = t[l] + t[r];
}
void update(int n,int b,int e,int i,int j,int v){
    push(n, b, e);// ai push ta important kintu akhono bujina kano
    if(j<b or i>e){
        return;
    }
    if(b>=i and e<=j){
        lazy[n] = v;
        push(n, b, e);// ata push kora hoy nai akhono
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    update(l, b, mid, i, j, v);
    update(r, mid+1, e, i, j, v);
    t[n] = t[l] + t[r];
}
ll query(int n,int b,int e,int i,int j){
    push(n, b, e);
    if(j<b or i>e){
        return 0;
    }
    if(b>=i and e<=j){
        return t[n];
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}


void solve(int test) {
    int n,q;
    cin>>n>>q;
    build(1, 1, n);
    while (q--)
    {
        int x;
        cin >> x;
        if(x==1){
            int l, r, v;
            cin >> l >> r >> v;
            l++;
            update(1, 1, n, l, r, v);
        }
        else{
            int i;
            cin >> i;
            i++;
            cout << query(1, 1, n, i, i) << "\n";
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
