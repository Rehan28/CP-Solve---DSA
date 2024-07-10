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

int const N = 1e5 + 9;
int a[N];
int t[4*N];
void build(int n,int b,int e){
    if(b==e){
        t[n] = a[b];
        return;
    }
    int l = 2*n;
    int r = 2*n+1;
    int mid = (b + e) / 2;
    build(l, b, mid);
    build(r, mid+1, e);
    t[n] = t[l] + t[r];
}
void update(int n,int b,int e,int i,int v){
    if(e<i or b>i){
        return;
    }
    if(b==e and b==i){
        t[n] += v;
        return;
    }
    int l = 2*n;
    int r = 2*n+1;
    int mid = (b + e) / 2;
    update(l, b, mid,i,v);
    update(r, mid+1, e,i,v);
    t[n] = t[l] + t[r];
}
void update1(int n,int b,int e,int i){
    if(e<i or b>i){
        return;
    }
    if(b==e and b==i){
        cout << t[n] << "\n";//donation
        t[n] = 0;
        return;
    }
    int l = 2*n;
    int r = 2*n+1;
    int mid = (b + e) / 2;
    update1(l, b, mid,i);
    update1(r, mid+1, e,i);
    t[n] = t[l] + t[r];
}
int query(int n,int b,int e,int i,int j){
    if(e<i or b>j){
        return 0;
    }
    if(e<=j and b>=i){
        return t[n];
    }
    int l = 2*n;
    int r = 2*n+1;
    int mid = (b + e) / 2;
    return (query(l, b, mid,i,j) + query(r, mid + 1, e,i,j));
}

void solve(int test) {
    int n,q;
    cin>>n>>q;
    cin(a,n);
    build(1, 0, n - 1);
    cout << "Case " << test << ":\n";
    while(q--){
        int x,y,z;
        cin >> x;
        if(x==1){
            cin >> y;
            update1(1, 0, n - 1, y);
        }
        else if(x==2){
            cin >> y >> z;
            update(1, 0, n - 1, y, z);
        }
        else{
            cin >> y >> z;
            cout << query(1, 0, n - 1, y, z) << "\n";
        }
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
