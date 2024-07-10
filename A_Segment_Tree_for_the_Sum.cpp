#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void dbg(int x) {cout << "x is " << x << endl; }
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define nl cout<<"\n";
ll mod = 1e9 + 7;
//cout << "Case " << test << ": ";
//Muku28
const int N = 1e5 + 9;
ll a[N];
ll t[4 * N];
void build(int node,int b,int e){
    if(b==e){
        t[node] = a[b];
        return;
    }
    int l = 2 * node;
    int r = 2 * node + 1;
    int mid = (b + e) / 2;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[node] = t[l] + t[r];
}
ll query(int n,int b,int e,int i,int j){
    if(e<i or b>j){
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
void update(int n,int b,int e,int pos,int val){
    if(b==e and b==pos){
        t[n] = val;
        return;
    }
    if(pos>e or pos<b){
        return;
    }
    int l = 2 * n;
    int r = 2 * n + 1;
    int mid = (b + e) / 2;
    update(l, b, mid, pos, val);
    update(r, mid+1, e, pos, val);
    t[n] = t[l] + t[r];
}
int Rehan(int test) {
    int n,q;
    cin>>n>>q;
    for (int i = 1; i <= n;i++) {
        cin >> a[i];
    }
    build(1, 1, n);
    while (q--) {
        ll x, y, z;
        cin >> x >> y >> z;
        if (x == 1){
            update(1, 1, n, y+1, z);
        }
        else{
            cout << query(1, 1, n, y+1,z) << "\n";
        }
    }
    return 0;
}
//--------------28--------------//
int main(){
    Muku28();
	int t = 1;
	//cin>>t;
    for(int i=1;i<=t;i++) {
        Rehan(i);
    }
		return 0;
 }